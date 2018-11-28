#include "stadiumsmodel.h"

StadiumsModel::StadiumsModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getStadiumsModel();

    sortedModel = new QSortFilterProxyModel;

    setSortedModelOptions();
    setStadiumNames();
}

StadiumsModel::~StadiumsModel()
{
    delete model;
}

void StadiumsModel::updateStadium(STRING stadiumName, int seatCap)
{
    dbConn->updateStadium(stadiumName, seatCap);
    refreshModel();
}

void StadiumsModel::updateStadiumName(STRING ogName, STRING newName)
{
    dbConn->updateStadiumName(ogName, newName);
    refreshModel();
}

bool StadiumsModel::addExpansionTeams()
{
    dbConn->readTeamAndStadiumsFromFile(":/Resources/Data/NBAdata2.txt");
    dbConn->readDistancesFromFile(":/Resources/Data/Distances2.txt");
    refreshModel();
    return true;
}

void StadiumsModel::setStadiumNames()
{
    for(int i = 0; i < sortedModel->rowCount(); i ++)
    {
       stadiumNames.append(sortedModel->data(sortedModel->index(i,0)).toString());
    }
}
/***************************************************************************//**
 * @brief StadiumsModel::refreshModel
 *
 * This gets the most up to date model from Database. Used when something in the
 * database is changed.
 ******************************************************************************/
void StadiumsModel::refreshModel()
{
    delete model;
    model = dbConn->getStadiumsModel();
    sortedModel->setSourceModel(model);
}

QStringList StadiumsModel::getStadiumNames() const
{
    return stadiumNames;
}




