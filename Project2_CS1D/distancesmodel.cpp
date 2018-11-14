#include "distancesmodel.h"

DistancesModel::DistancesModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getDistancesModel();

    sortedModel = new QSortFilterProxyModel;

    setSortedModelOptions();
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
