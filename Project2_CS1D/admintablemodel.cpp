#include "admintablemodel.h"

/******************************************************************************
 *=============================================================================
 *                         CONSTRUCTOR
 ******************************************************************************/

/***************************************************************************//**
 * @brief AdminTableModel::AdminTableModel
 * @param usernameF
 * @param passwordF
 *
 * Constructor assigns member values to those passed in as paramaters
 ******************************************************************************/
AdminTableModel::AdminTableModel(STRING usernameF, STRING passwordF)
{
    userName = usernameF;
    password = passwordF;

}

/******************************************************************************
 *=============================================================================
 *                         ACCESSOR METHODS
 ******************************************************************************/

/***************************************************************************//**
 * @brief AdminTableModel::isValidUser
 * Uses instance of databaseManager class to validate if username and password
 * are valid.
 *
 * @return boolean value- true if user exists in database
 *                        (matching username and password)
 ******************************************************************************/
bool AdminTableModel::isValidUser()
{

    dbConn = DatabaseManager::getInstance();
    return dbConn->authenticateUserLogin(userName, password);
}

/***************************************************************************//**
 * @brief AdminTableModel::isMissingFields
 * @return boolean value - true if either username or password is empty
 ******************************************************************************/
bool AdminTableModel::isMissingFields()
{
    if(userName.isEmpty() || password.isEmpty())
        return true;

    return false;
}

/***************************************************************************//**
 * @brief AdminTableModel::getErrorMessage
 * Checks if username and password values are empty. If empty, a string value is
 * appended to the error message being returned to calling function.
 *
 * @return STRING errorMessage
 ******************************************************************************/
STRING AdminTableModel::getErrorMessage()
{
    STRING errorMessage = "";

    if(userName.isEmpty())
        errorMessage += "Username cannot be empty!\n";
    if(password.isEmpty())
        errorMessage += "Password cannot be empty!";

    return errorMessage;
}
