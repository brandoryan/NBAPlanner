#ifndef MODEL_H
#define MODEL_H

#include "databasemanager.h"

class Model
{
public:

    // Sets new pattern to filter tables
    void  setFilter(QRegExp regexPattern);
    void  setFilterColumn(int colIndex);
    void  setSelectedRowData(int row);

    QSortFilterProxyModel *getSortedModel();

    STRING getSelectedRowItem(int colIndex);


protected:
    DatabaseManager *dbConn;

    QSqlQueryModel        *model;
    QSortFilterProxyModel *sortedModel;

    strVECTOR selectedRowData;

    // returns reference to sortedModels
    void setSortedModelOptions();

    virtual void refreshModel() = 0;

};

#endif // MODEL_H
