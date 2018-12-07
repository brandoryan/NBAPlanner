#ifndef DISTANCESMODEL_H
#define DISTANCESMODEL_H

#include "model.h"
#include <QString>
#include <QDebug>

struct Distances {
    STRING startTeam;
    STRING endTeam;
    double distanceBetween;
};

class DistancesModel: public Model
{
public:
    DistancesModel();
    DistancesModel(QString s, QString f, int d);
    ~DistancesModel();

    void refreshModel();

//private:
    QVector<Distances> teamDistances;
};

#endif // DISTANCESMODEL_H
