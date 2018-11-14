#include "stadiumsteamscombinedmodel.h"

stadiumsTeamsCombinedModel::stadiumsTeamsCombinedModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getStadiumsAndTeamsModel();

    sortedModel = new QSortFilterProxyModel;
    seatingCapTotal = dbConn->getSeatingCapacitySum();
    setSortedModelOptions();
}

stadiumsTeamsCombinedModel::~stadiumsTeamsCombinedModel()
{
    delete model;
}

int stadiumsTeamsCombinedModel::getSeatingCapTotal() const
{
    return seatingCapTotal;
}

/***************************************************************************//**
 * @brief stadiumsTeamsCombinedModel::refreshModel
 *
 * This gets the most up to date model from Database. Used when something in the
 * database is changed.
 ******************************************************************************/
void stadiumsTeamsCombinedModel::refreshModel()
{
    delete model;
    model = dbConn->getStadiumsAndTeamsModel();
    sortedModel->setSourceModel(model);
}
