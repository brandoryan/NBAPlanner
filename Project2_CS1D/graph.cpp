#include "graph.h"

/******************************************************************************
 *                  CONSTRUCTOR'S / DECONSTRUCTOR
 ******************************************************************************/
Graph::Graph()
{
    totalVertices   = 0;
    visitedVertices = 0;

    generateGraphFromModel();
}

Graph::Graph(int numberOfVertices)
{
    adjacencyList.reserve(numberOfVertices);
}

Graph::~Graph()
{}

void Graph::generateGraphFromModel()
{
    QSortFilterProxyModel *distanceMod = distancesModel.getSortedModel();
//    QSortFilterProxyModel *stadiums = stadiumsModel.getSortedModel();

    Vertex *startVertex;
    Vertex *endVertex;
    std::string start;
    std::string end;
    double distance;

    // Adds all vertexes
    for (int i = 0; i < distanceMod->rowCount(); i ++)
    {
        start = distanceMod->data(distanceMod->index(i,0)).toString().toUtf8().constData();
        startVertex = new Vertex(start);
        addVertex(startVertex);
    }

    // Adds distances
    start = "";
    for (int row = 0; row < distanceMod->rowCount(); row ++)
    {

        start = distanceMod->data(distanceMod->index(row,0)).toString().toUtf8().constData();
        end  = distanceMod->data(distanceMod->index(row,1)).toString().toUtf8().constData();
        distance  = distanceMod->data (distanceMod->index(row,2)).toDouble();
        startVertex = getVertex(start);
        endVertex   = getVertex(end);

        addEdge(startVertex, endVertex, distance);
    }

    //printGraph();

}

/******************************************************************************
 *					         MUTATORS
 ******************************************************************************/
// Adds a new vertex to the map
void Graph::addVertex(Vertex *newVertex)
{
    if(adjacencyList.count(newVertex) == 0)
    {
        totalVertices ++;
        adjacencyList[newVertex];
        distances[newVertex];
    }

}

// Adds adjacent vertexes to the source vertex as values
void Graph::addEdge(Vertex *source, Vertex *destination, double weight)
{
    Edge newEdge;
    newEdge.setDestination(destination);
    newEdge.setSource(source);
    newEdge.setWeight(weight);
    adjacencyList[source].push_back(newEdge);
}

/******************************************************************************
* void Graph::resetGraph()
* Resets all values in adjacencyList related to a traversal back to default:
*      visitedVertices is set back to 0
*      totalDistance is set back to 0
*      All vertex's 'beenVisited' value is set to false
*      All Edges 'isDiscoveryEdge' value is set to false
*-----------------------------------------------------------------------------
*		Parameter: none
*-----------------------------------------------------------------------------
*		Return: none
******************************************************************************/
void Graph::resetGraph()
{
    visitedVertices = 0;
    totalDistance   = 0;

    unordered_map<Vertex*, vector<Edge>>::iterator it = adjacencyList.begin();


    while(it != adjacencyList.end())
    {
        it->first->setBeenVisited(false);

        for(int i = 0; i < it->second.size(); i ++)
        {
            it->second.at(i).setDiscoveryEdge(false);
        }
        it ++;
    }
}

/******************************************************************************
* void Graph::resetDistances()
* Resets all pair values in distances related back to default:
*      <INT_MAX, NULL>
*-----------------------------------------------------------------------------
*		Parameter: none
*-----------------------------------------------------------------------------
*		Return: none
******************************************************************************/
void Graph::resetDistances()
{
    unordered_map<Vertex*, pair<int, Vertex*>>::iterator it = distances.begin();
    while(it != distances.end())
    {

        it->second.first  = INT_MAX;
        it->second.second = NULL;
        it++;
    }
}



/******************************************************************************
 *					         ACCESSORS
 ******************************************************************************/

/******************************************************************************
* void Graph::DFS(Vertex *startPosition)
* Function implements a Depth first search of the a graph given
* a start point. This function calls a recursive function which is used to
* traverse the graph. This function outputs to console the total distance
 * traveled.
*-----------------------------------------------------------------------------
*		Parameter: startPosition (initial position of traversal)
*-----------------------------------------------------------------------------
*		Return: none
******************************************************************************/
void Graph::DFS(Vertex *startingPoint)
{
    resetGraph();

    path.push(startingPoint);
    DFSRecursiveHelper(startingPoint);
}

/******************************************************************************
* void Graph::DFS(Vertex *startPosition)
* Recursive function used to traverse a graph depth first given an initial
 * starting point. Function is called by Graph::DFS(Vertex *startingPoint).
 * The function will output its path along with discovery edges.
*-----------------------------------------------------------------------------
*		Parameter: Vertex *vertex (initial position of traversal)
*-----------------------------------------------------------------------------
*		Return: none
******************************************************************************/
void Graph::DFSRecursiveHelper(Vertex *vertex)
{
    Vertex *destination;

    vertex->setBeenVisited(true);
    visitedVertices ++;

    sort(adjacencyList[vertex].begin(), adjacencyList[vertex].end());
    for(int i = 0; i < adjacencyList[vertex].size(); i ++)
    {
        destination = adjacencyList[vertex].at(i).getDestination();
        if(!destination->hasBeenVisited())
        {

            adjacencyList[vertex].at(i).setDiscoveryEdge(true);
            totalDistance +=  adjacencyList[vertex].at(i).getWeight();
            path.push(destination);
            DFSRecursiveHelper(destination);
        }
    }
}

/******************************************************************************
* void Graph::BFS(Vertex *vertex)
* Function implements a Breadth first search of the a graph given
 * a starting point. The discovery edges and total distance traveled are output
 * to console.
*-----------------------------------------------------------------------------
*		Parameter: startPosition (initial position of traversal)
*-----------------------------------------------------------------------------
*		Return: none
******************************************************************************/
void Graph::BFS(Vertex *vertex)
{
    resetGraph();
    queue<Vertex *> queue;
    Vertex *adjacentVertex;
    path.push(vertex);
    queue.push(vertex);
    vertex->setBeenVisited(true);
    while (!queue.empty())
    {
        vertex = queue.front();

        queue.pop();
        sort(adjacencyList[vertex].begin(), adjacencyList[vertex].end());
        for(int edgeToVertex = 0; edgeToVertex < adjacencyList[vertex].size(); edgeToVertex++)
        {
            adjacentVertex = adjacencyList[vertex].at(edgeToVertex).getDestination();
            if(!adjacentVertex->hasBeenVisited())
            {
                path.push(adjacentVertex);
                adjacentVertex->setBeenVisited(true);
                adjacencyList[vertex].at(edgeToVertex).setDiscoveryEdge(true);
                totalDistance += adjacencyList[vertex].at(edgeToVertex).getWeight();
                queue.push(adjacentVertex);
            }
        }
    }
}



/******************************************************************************
* void Graph::Dijkstra(Vertex *startingPoint)
* This is an implementation of Dijkstra's algorithm used to find shortest
 * distance from a vertex to all other vertices in graph.
 *
 * This implementation uses a priorty queue which stores the vertices adjacent
 * to the current vertex. Priority is given to the vertex whos distance from
 * the initial starting point is shortest.
 *
 * Distances are stored in an unordered map (Class member) with the following
 * format.
 *
 * KEY              VALUE
 * -------          -------------------
 * VERTEX*          pair<int, VERTEX*>
 * (Vertex)         distances from Key vertex to start, Parent Vertex
 *
 * ex. If you ar finding the shortest distances starting at A
 *     and the graph also includes vertices B C:
 *        4      2
 *     A-----B-------C
 *
 * after algorithm distances graph will be:
 *    KEY     VALUE
 *     A     <0, null>
 *     B     <4, A>
 *     C     <6, B>
 *
 *     *Graph will not be printed in order as an unordred map is used
*-----------------------------------------------------------------------------
*		Parameter: Vertex* points to a vertex that is used as starting point
*-----------------------------------------------------------------------------
*		Return: none - distance graph will be printed to console
******************************************************************************/
void Graph::Dijkstra(Vertex *startingPoint)
{
    int    distance;        // Distances from vertex to starting point
    Vertex *currentVertex;  // parent
    Vertex *adjacentVertex; // child

    // Priority is given to vertices with shortest distance from starting point
    priority_queue<Edge, vector<Edge>, greater<Edge>> unvisted;

    resetDistances();

    distances[startingPoint].first = 0;
    unvisted.push(Edge(startingPoint, 0));

    while(!unvisted.empty())
    {
        currentVertex = unvisted.top().getSource();
        unvisted.pop();

        for(int i = 0; i < adjacencyList[currentVertex].size(); i ++)
        {
            adjacentVertex = adjacencyList[currentVertex].at(i).getDestination();
            distance       = adjacencyList[currentVertex].at(i).getWeight() +
                    distances[currentVertex].first;

            if(distance < distances[adjacentVertex].first)
            {
                distances[adjacentVertex].first  = distance;
                distances[adjacentVertex].second = currentVertex;
                unvisted.push(Edge(adjacentVertex, distance));
            }
        }
    }

}

double Graph::getShortestDistance(Vertex *end)
{
    return distances[end].first;
}

double Graph::getTotalDistance() const
{
    return totalDistance;
}

STRING Graph::getClosestVertex(Vertex *startingPoint, strVECTOR vertexChoices)
{
    int    distance;        // Distances from vertex to starting point
    Vertex *currentVertex;  // parent
    Vertex *adjacentVertex; // child
    STRING closestVertex = "";
    bool vertexFound = false;
    double closestDist = -1;

    // Priority is given to vertices with shortest distance from starting point
    priority_queue<Edge, vector<Edge>, greater<Edge>> unvisted;

    resetDistances();

    distances[startingPoint].first = 0;
    unvisted.push(Edge(startingPoint, 0));

    while(!unvisted.empty() && !vertexFound)
    {
        currentVertex = unvisted.top().getSource();
        unvisted.pop();

        for(int i = 0; i < adjacencyList[currentVertex].size(); i ++)
        {
            adjacentVertex = adjacencyList[currentVertex].at(i).getDestination();
            distance       = adjacencyList[currentVertex].at(i).getWeight() +
                    distances[currentVertex].first;

            if(distance < distances[adjacentVertex].first)
            {
                for (auto choicesIter = vertexChoices.begin(); choicesIter != vertexChoices.end(); ++choicesIter)
                {
                    if (*choicesIter == QString::fromStdString(adjacentVertex->getName()))
                    {
                        if (closestDist == -1)
                        {
                            closestDist = distance;
                            closestVertex = *choicesIter;

                        }
                        else if (closestDist > distance)
                        {
                            closestVertex = *choicesIter;
                            closestDist = distance;

                        }                    }
                }

                distances[adjacentVertex].first  = distance;
                distances[adjacentVertex].second = currentVertex;
                unvisted.push(Edge(adjacentVertex, distance));
            }

        }
    }
    return closestVertex;

}
/******************************************************************************
* void Graph::MST(Vertex *startingPoint)
* This is an implementation of Prims algorithm used to find the graphs
 * minimum spanning tree
 *
 * This implementation uses a priority queue which stores the vertices adjacent
 * to the current vertex. Priority is given to the vertex who's distance from
 * the current vertex is shortest
 *
 * Distances are stored in an unordered map (Class member) with the following
 * format.
 *
 * KEY              VALUE
 * -------          -------------------
 * VERTEX*          pair<int, VERTEX*>
 * (Vertex)         distances from Key vertex to start, Parent Vertex
 *
 * ex. If you are finding the MST
 *        4      2
 *     A-----B-------C
 *           |      /
 *           |5   / 8
 *           |  /
 *           D/
 *
 * after algorithm distances graph will be:
 *    KEY     VALUE
 *     A     <0, null>
 *     B     <4, A>
 *     C     <2, B>
 *     D     <5, B>
 *
 *     distance of MST is 11
 *     *Graph will not be printed in order as an unordred map is used
*-----------------------------------------------------------------------------
*		Parameter: Vertex* points to a vertex that is used as starting point
*-----------------------------------------------------------------------------
*		Return: none - distance graph will be printed to console
******************************************************************************/
void Graph::MST(Vertex *startingPoint)
{
    int    distance;        // Distances from vertex to starting point
    Vertex *currentVertex;  // parent
    Vertex *adjacentVertex; // child

    // Priority is given to vertices with shortest distance from starting point
    priority_queue<Edge, vector<Edge>, greater<Edge>> unvisted;

    resetDistances();
    resetGraph();

    distances[startingPoint].first = 0;
    unvisted.push(Edge(startingPoint, 0));


    int i = 0;
    while(!unvisted.empty())
    {

        currentVertex = unvisted.top().getSource();
        currentVertex->setBeenVisited(true);
        unvisted.pop();

        for(int i = 0; i < adjacencyList[currentVertex].size(); i ++)
        {
            adjacentVertex = adjacencyList[currentVertex].at(i).getDestination();
            distance       = adjacencyList[currentVertex].at(i).getWeight();

            if(!adjacentVertex->hasBeenVisited() && distance < distances[adjacentVertex].first)
            {

                distances[adjacentVertex].first  = distance;
                distances[adjacentVertex].second = currentVertex;
                unvisted.push(Edge(adjacentVertex, distance));
            }
        }
    }

}

unordered_map<string, pair<int, string>> Graph::getMST()
{
    string toVertex;
    string parentVertex;
    int    shortestDistance;
    int    totalDistance;
    unordered_map<Vertex*, pair<int, Vertex*> >::iterator iterator;
    unordered_map<string, pair<int, string>> mst;
    iterator = distances.begin();
    totalDistance = 0;

    while(iterator != distances.end())
    {


        toVertex         = iterator->first->getName();
        shortestDistance = iterator->second.first;
        totalDistance += shortestDistance;
        if(shortestDistance == 0)
            parentVertex = "-";
        else
            parentVertex     = iterator->second.second->getName();

        mst[toVertex];
        mst[toVertex].first = shortestDistance;
        mst[toVertex].second = parentVertex;

        iterator ++;
    }

    return mst;
}

void Graph::printGraph()
{
    string startVertex;
    string distance;
    Vertex *v;
    unordered_map<Vertex*, vector<Edge>>::iterator mapIt = adjacencyList.begin();

    while(mapIt != adjacencyList.end())
    {
        startVertex = "";
        qDebug() <<(QString::fromStdString(mapIt->first->getName()));
        for(int i = 0; i < mapIt->second.size(); i ++)
        {
            v = mapIt->second.at(i).getDestination();
            distance = to_string(mapIt->second.at(i).getWeight());
            startVertex += v->getName() + " " + distance + ", ";

        }
        qDebug() << (QString::fromStdString(startVertex));
        qDebug() << ("\n\n");
        mapIt++;
    }

}

Vertex *Graph::getVertex(string name)
{
    unordered_map<Vertex*, vector<Edge>>::iterator mapIt = adjacencyList.begin();
    bool found = false;
    Vertex *v  = nullptr;

    string tempName = mapIt->first->getName();

    while(mapIt != adjacencyList.end() && !found)
    {
        qDebug() << (QString::fromStdString(tempName)) << endl;
        tempName = mapIt->first->getName();
        if (mapIt->first->getName() == name)
        {
            found = true;
            v     = mapIt->first;
        }
        mapIt++;
    }
    return v;
}


int Graph::getTotalVertices() const
{
    return totalVertices;
}

int Graph::getVisitedVertices() const
{
    return visitedVertices;
}
