#ifndef MSTGRAPH_H
#define MSTGRAPH_H

#include <iostream>
#include <string>
#include <iomanip>
#include <qvector.h>
#include <QDebug>
#include "distances.h"
#include "databasemanager.h"
#include "distancesmodel.h"

class mstGraph {
private:
    int** adjacencyMatrix;
    int inputSize;
    int vertexCount;
    std::vector<QString> names;

public:
    mstGraph(QVector<distances> inputs);
    QPair<QQueue<QString>,int> dijkstra(QString startCity, QString endCity);
    QPair<QQueue<QString>,int> superDijkstra(QVector<QString> cities);
    QPair<QQueue<QString>,int> Prims();
    QString getMstPrintout();
    int minKey(int key[], bool set[]);
    void addEdge(distances e);
    ~mstGraph();
};

#endif // MSTGRAPH_H
