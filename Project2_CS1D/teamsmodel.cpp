#include "teamsmodel.h"

TeamsModel::TeamsModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getTeamsModel();

    sortedModel = new QSortFilterProxyModel;
    setSortedModelOptions();
}

TeamsModel::~TeamsModel()
{
    delete model;
}



/***************************************************************************//**
 * @brief TeamsModel::refreshTeamsModel
 *
 * This gets the most up to date model from Database. Used when something in the
 * database is changed.
 ******************************************************************************/
void TeamsModel::refreshModel()
{
    delete model;
    model = dbConn->getTeamsModel();
    sortedModel->setSourceModel(model);
}



