#include "distancesmodel.h"

DistancesModel::DistancesModel()
{
    Distances tempDistance;

    dbConn = DatabaseManager::getInstance();

    model = dbConn->getDistancesModel();
    sortedModel = new QSortFilterProxyModel;

    setSortedModelOptions();

    for (int i = 0; i < sortedModel->rowCount(); i++)
    {
        tempDistance.startTeam       = sortedModel->data(sortedModel->index(i, 0)).toString();
        tempDistance.endTeam         = sortedModel->data(sortedModel->index(i, 1)).toString();
        tempDistance.distanceBetween = sortedModel->data(sortedModel->index(i, 2)).toDouble();

        teamDistances.push_back(tempDistance);
    }

}

DistancesModel::~DistancesModel()
{
    delete model;
}

void DistancesModel::refreshModel()
{
    delete model;
    model = dbConn->getDistancesModel();
    sortedModel->setSourceModel(model);
}
