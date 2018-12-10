#ifndef GRAPH_H
#define GRAPH_H

#include "edge.h"
#include "distancesmodel.h"
#include "stadiumsmodel.h"
#include "unordered_map"
class Graph
{
    public:
        /*****************************************************************
        *		     CONSTRUCTORS & DESTRUCTOR
        *****************************************************************/
        Graph();
        Graph(int numberOfVertices);
        ~Graph();

        void generateGraphFromModel();
        /*****************************************************************
        *					MUTATORS
        *****************************************************************/
        void addVertex(Vertex *newVertex);
        void addEdge(Vertex *source, Vertex *destination, double weight);
        /*****************************************************************
         *					ACCESSORS
         *****************************************************************/

        // Algorithms
        void DFS(Vertex *startingPoint);
        void BFS(Vertex *startingPoint);
        void Dijkstra(Vertex *startingPoint);
        void MST(Vertex *startingPoint);

        void printGraph();
    private:
        int     totalVertices;
    public:
        int getTotalVertices() const;
        queue<Vertex *> path;

        int getVisitedVertices() const;
        Vertex* getVertex(string name);

        double getShortestDistance(Vertex *end);
        double getTotalDistance() const;

        STRING getClosestVertex(Vertex *startingPoint, strVECTOR vertexChoices);

        unordered_map<string, pair<int, string> > getMST();

private:
        DistancesModel distancesModel;
        StadiumsModel stadiumsModel;

        // Total number of vertices in graph
        int     visitedVertices; // Tracks visited vertices during traversal
        double  totalDistance;   // Stores distance traveled during traversal

        /**
         * unordered map that stores the actual graph.
         * key: is a pointer to a vertex object.
         * value: is a vector of edge objects (Adjacency list)
         */
        unordered_map<Vertex*, vector<Edge>> adjacencyList;

        /**
         * unordered map that stores edge distances (used for Dijkstra and MST)
         * to any other vertex (Used for Dijkstras & MST).
         * Key: is a pointer to a vertex object.
         * Value: is a pair containing an integer and a Vertex Object
         */
        unordered_map<Vertex*, pair<int, Vertex*> > distances;

        // Recursive function used for DFS
        void DFSRecursiveHelper(Vertex *vertex);

        // resets hasBeenVisited,isDiscoveryEdge, totalDistance, visitedVertices
        // in adjacenyList
        void resetGraph();

        // resets all pair values to <INT_MAX, null> in distances
        void resetDistances();


};
#endif // GRAPH_H
