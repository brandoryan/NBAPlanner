#include "souvenirsmodel.h"

SouvenirsModel::SouvenirsModel()
{
    dbConn = DatabaseManager::getInstance();

    model = dbConn->getSouvenirsModel();

    sortedModel = new QSortFilterProxyModel;
    setSortedModelOptions();
    setFilterColumn(SOUVENIRS_STADIUM_NAME);
}

SouvenirsModel::~SouvenirsModel()
{
    delete model;
}

/***************************************************************************//**
 * @brief SouvenirsModel::refreshModel
 *
 * This gets the most up to date model from Database. Used when something in the
 * database is changed.
 ******************************************************************************/
void SouvenirsModel::refreshModel()
{
    delete model;
    model = dbConn->getSouvenirsModel();
    sortedModel->setSourceModel(model);
}


/******************************************************************************
 *=============================================================================
 *                      ADD, UPDATE, DELETE METHODS
 ******************************************************************************/
/***************************************************************************//**
 * @brief SouvenirsModel::addSouvenir
 * @param itemName
 * @param itemPrice
 * @param stadium
 *
 * Adds souvenir to database
 ******************************************************************************/
void SouvenirsModel::addSouvenir(STRING itemName, double itemPrice, STRING stadium)
{
    dbConn->addNewSouvenir(itemName, itemPrice, stadium);
    refreshModel();
}

/***************************************************************************//**
 * @brief SouvenirsModel::updateSouvenir
 * @param itemName
 * @param itemPrice
 * @param stadium
 *
 * updates souvenir price in database
 ******************************************************************************/
void SouvenirsModel::updateSouvenir(STRING itemName, double itemPrice, STRING stadium)
{
    dbConn->updateSouvenir(itemName, itemPrice, stadium);
    refreshModel();
}

/***************************************************************************//**
 * @brief SouvenirsModel::deleteSouvenir
 * @param itemName
 * @param itemPrice
 * @param stadium
 *
 * deletes souvenir from database
 ******************************************************************************/
void SouvenirsModel::deleteSouvenir(STRING itemName, double itemPrice, STRING stadium)
{
    dbConn->deleteSouvenir(itemName, itemPrice, stadium);
    refreshModel();
}

