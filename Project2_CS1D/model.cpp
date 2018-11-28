#include "model.h"


/******************************************************************************
 *=============================================================================
 *                       TABLE MODEL CONFIGURATION METHODS
 ******************************************************************************/
/***************************************************************************//**
 * @brief Model::setSortedModelOptions()
 *
 * Sets configurations for the models
 ******************************************************************************/
void Model::setSortedModelOptions()
{
    sortedModel->setSourceModel(model);
    sortedModel->setSortCaseSensitivity(Qt::CaseInsensitive);
    sortedModel->setDynamicSortFilter(true);
}

/***************************************************************************//**
 * @brief Model::setFilter
 * @param regexPattern
 *
 * Sets the model to be filtered by the regExPattern passed in as argument
 ******************************************************************************/
void Model::setFilter(QRegExp regexPattern)
{
    sortedModel->setFilterRegExp(regexPattern);
}

void Model::setFilterColumn(int colIndex)
{
    sortedModel->setFilterKeyColumn(colIndex);
}

/***************************************************************************//**
 * @brief Model::setSelectedRowData
 *
 * This function sets the class member variable 'selectedRowData' by
 * clearing any previous values, then pushing each element found in the
 * user selected row to the back of the vector.
 *
 ******************************************************************************/
void Model::setSelectedRowData(int row)
{
    selectedRowData.clear();

    int numberOfColumns = sortedModel->columnCount();

    for(int col = 0; col < numberOfColumns; col++)
    {
        selectedRowData.push_back(sortedModel->data(sortedModel->
                                                    index(row,col)).toString());
    }
}

/******************************************************************************
 *=============================================================================
 *                      GET TABLE MODEL METHODS
 ******************************************************************************/
/***************************************************************************//**
 * @brief TeamsModel::getSortedTeams
 * @return *TeamsModel
 *
 * returns a reference to the sortedTeamsModel
 ******************************************************************************/
QSortFilterProxyModel *Model::getSortedModel()
{
    return sortedModel;
}

/***************************************************************************//**
 * @brief Model::getSelectedRowItem
 * @param colIndex
 * @return String element
 *
 * Function accepts in as an argument an integer value representing an index to
 * a column in the model. the element associated with that column is then
 * returned to the calling function.
 ******************************************************************************/
STRING Model::getSelectedRowItem(int colIndex)
{
    return selectedRowData.at(colIndex);
}
