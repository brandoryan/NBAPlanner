#ifndef ADMINTABLEMODEL_H
#define ADMINTABLEMODEL_H

#include "databasemanager.h"

/**
 * @brief The AdminTableModel class
 *
 * Class is used to handle logic related to the adminstrators database table
 *  - used by mainwindow class
 */
class AdminTableModel
{
    public:
        AdminTableModel(STRING usernameF, STRING passwordF);

        // ACCESSOR METHODS
        bool   isValidUser();
        bool   isMissingFields();
        STRING getErrorMessage();

    private:
        DatabaseManager       *dbConn; // Points to instance of DatabaseManager class

        STRING userName;
        STRING password;

};

#endif // ADMINTABLEMODEL_H
