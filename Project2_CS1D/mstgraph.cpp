#include "mstGraph.h"

//CONSTRUCTOR -fills graph given vector of input type-
mstGraph::mstGraph(QVector<distances> inputs){

    //initialize adjaceny matrix
    this->inputSize = inputs.size();
    adjacencyMatrix = new int*[inputSize];
    for (int i = 0; i < inputSize; i++) {
        adjacencyMatrix[i] = new int[inputSize];
        for (int j = 0; j < inputSize; j++)
            adjacencyMatrix[i][j] = 0;
    }

    //put names and remove duplicates into nameVec
    for(int i=0; i<inputs.size(); ++i){
        names.push_back(inputs[i].getStart());
        names.push_back(inputs[i].getFinish());
    }
    std::sort(names.begin(), names.end());
    names.erase(std::unique(names.begin(), names.end()), names.end());

    //add inputs into the graph
    for(int i=0; i<inputs.size(); ++i){
        addEdge(inputs[i]);
    }

    vertexCount = names.size();
}

QString mstGraph::getMstPrintout()
{
    QPair<QQueue<QString>,int> pimms;
    QString MST;

    pimms = Prims();

    MST = "--------------------------------------\n"
              "MST Printout:"
        "\n--------------------------------------\n\n";

    while(!pimms.first.isEmpty()){
        MST += pimms.first.front() + "\n";
        pimms.first.dequeue();
    }

    MST += "\n--------------------------------------\n"
               "MST Distance: " + QString::number(pimms.second)
            + "\n--------------------------------------\n";

    return MST;
}

//DIJKSTRAS GIVEN START AND END INDEX
QPair<QQueue<QString>,int> mstGraph::dijkstra(QString startCity, QString endCity)
{
    //return value
    QPair<QQueue<QString>,int> temp;

    int start;
    int end;

    //find numerical index of cities
    for(unsigned long i=0; i<names.size();++i){
        if(startCity == names[i]){
            start = i;
        }
        if(endCity == names[i]){
            end = i;
        }
    }

    int cost[vertexCount][vertexCount];
    int distance[vertexCount];
    int pred[vertexCount];   //gives a nodes predecessor
    int visited[vertexCount];
    int count;
    int minDistance;
    int nextnode;

    for(int i=0;i<vertexCount;i++)
        for(int j=0;j<vertexCount;j++)
            if(adjacencyMatrix[i][j]==0)
                cost[i][j]=10000;
            else
                cost[i][j]=adjacencyMatrix[i][j];

    //initialize pred,distance,visited
    for(int i=0;i<vertexCount;i++)
    {
        distance[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }

    distance[start]=0;
    visited[start]=1;
    count=1;

    while(count<vertexCount-1)
    {
        minDistance=10000;

        //nextnode gives the node at minimum distance
        for(int i=0;i<vertexCount;i++){
            if(distance[i]<minDistance&&!visited[i])
            {
                minDistance=distance[i];
                nextnode=i;
            }
        }
        //check if a better path exists through nextnode
        visited[nextnode]=1;
        for(int i=0;i<vertexCount;i++){
            if(!visited[i])
            {
                if(minDistance+cost[nextnode][i]<distance[i])
                {
                    distance[i]=minDistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
            }
        }
        count++;
    }

    temp.second = distance[end];

    //output total distance from start to end
    qDebug()<<"Distance from "<<startCity << " to "<<endCity<<": "<<temp.second;

    //store path traveled for shortest distance
    temp.first.push_front(names[end]);
    while(end!=start){
        end=pred[end];
        temp.first.push_front(names[end]);
    }

    for(unsigned long i = 0; i< temp.first.size(); ++i ){
        qDebug()<<temp.first[i];
    }

    return temp;
}

//SUPER DIJKSTRAS GIVEN START AND END INDEX
QPair<QQueue<QString>,int> mstGraph::superDijkstra(QVector<QString> cities)
{
    int lowestDistance= INT_MAX;
    int currentDistance;
    int index;

    QPair<QQueue<QString>,int> path;

    int totalDistance = 0;

    QString temp;

    path.first.push_back(cities.takeFirst());

    while(!cities.empty()){

        lowestDistance = INT_MAX;
        for(int i=0; i<cities.size(); ++i){
            currentDistance = dijkstra(path.first.back(), cities[i]).second;
            if(currentDistance < lowestDistance){
                lowestDistance = currentDistance;
                temp  = cities[i];
                index  = i;

            }
        }

        totalDistance += lowestDistance;
        path.first.push_back(cities.takeAt(index));
    }

    path.second = totalDistance;

    return path;
}

//PRIMS HELPER FUNCTION
int mstGraph::minKey(int key[], bool set[])
{
    int min = INT_MAX;
    int index;

    for (int v = 0; v < vertexCount; v++)
        if (set[v] == false && key[v] < min)
            min = key[v], index = v;

    return index;
}

//PRIMS ALGORITHM
QPair<QQueue<QString>,int> mstGraph::Prims()
{
    QPair<QQueue<QString>,int> temp;
    double totalDistance=0;
    int parent[vertexCount];
    int key[vertexCount];
    bool msTree[vertexCount];

    for (int i = 0; i < vertexCount; i++)
    {
        key[i] = INT_MAX;
        msTree[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < vertexCount-1; count++){
        int u = minKey(key, msTree);
        msTree[u] = true;

        for (int v = 0; v < vertexCount; v++){
            if (adjacencyMatrix[u][v] && msTree[v] == false && adjacencyMatrix[u][v] <  key[v])
            {
                parent[v]  = u;
                key[v] = adjacencyMatrix[u][v];
            }
        }
    }
    //Store The Minimum Spanning tree in QQUeue
    for (int i = 1; i < vertexCount; i++){
        QString tempEdge;
        tempEdge.append(names[parent[i]]);
        tempEdge.append(" - ");
        tempEdge.append(names[i]);
        temp.first.push_back(tempEdge);
        qDebug() << names[parent[i]] << " - " << names[i] << endl;

        //Increment total distance
        totalDistance += adjacencyMatrix[i][parent[i]];

        qDebug() << totalDistance;
    }

    //Store Total Disrtance
    temp.second = totalDistance;
    qDebug() << totalDistance;

    return temp;
}

//ADD EDGES
void mstGraph::addEdge(distances e) {
    int index1=0;
    int index2=0;
    //assigning arbitrary indexes based off names index
    for(unsigned long i=0; i<names.size();++i){
        if(e.getStart() == names[i]){
            index1 = i;
        }
        if(e.getFinish() == names[i]){
            index2 = i;
        }
    }


    if (index1 >= 0 && index1 < inputSize && index2 >= 0 && index2 < inputSize) {
        adjacencyMatrix[index1][index2] = e.GetDistance();
        adjacencyMatrix[index2][index1] = e.GetDistance();
    }

    //std::cout<<index1<<" "<<index2<<std::endl;
}

mstGraph::~mstGraph() {
    for (int i = 0; i < inputSize; i++)
        delete[] adjacencyMatrix[i];
    delete[] adjacencyMatrix;
}


