#include "teamsmodel.h"

TeamsModel::TeamsModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getTeamsModel();

    sortedModel = new QSortFilterProxyModel;
    setSortedModelOptions();
    seatingCapTotal = dbConn->getSeatingCapacitySum();
    setTeamNames();
}

TeamsModel::~TeamsModel()
{
    delete model;
}

void TeamsModel::updateTeam(const STRING stadiumName,
                            const STRING location,
                            const int    seatCap)
{
    dbConn->updateTeam(stadiumName, location, seatCap);
    refreshModel();
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

int TeamsModel::getSeatingCapTotal() const
{
    return seatingCapTotal;
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



