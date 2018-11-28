#include "teamsmodel.h"

TeamsModel::TeamsModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getTeamsModel();

    sortedModel = new QSortFilterProxyModel;
    setSortedModelOptions();
    setTeamNames();
}

TeamsModel::~TeamsModel()
{
    delete model;
}

void TeamsModel::setTeamNames()
{
    for(int i = 0; i < sortedModel->rowCount(); i ++)
    {
       teamNames.append(sortedModel->data(sortedModel->index(i,0)).toString());
    }
}

QStringList TeamsModel::getTeamNames()
{
    return teamNames;
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



