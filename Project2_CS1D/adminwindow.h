#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include "mainwindow.h"
#include "teamsmodel.h"
#include "stadiumsmodel.h"
#include "souvenirsmodel.h"
#include "distancesmodel.h"

enum adminPages
{
    MAIN_PAGE,
    ADD_UPDATE_SOUVENIR_PAGE,
    UPDATE_STADIUM_PAGE
};

namespace Ui
{
    class AdminWindow;
}

class AdminWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit AdminWindow(QWidget *parent = 0);
        ~AdminWindow();

    void test(QTableView *table);
protected slots:


private slots:

        // Navigation Slots
        void on_pushButton_adminLogout_clicked();

        // Used to extract user selections
        void on_tableView_Teams_clicked(const QModelIndex &index);
        void on_tableView_Souveniers_clicked(const QModelIndex &index);

        // Add, update, delete
        void on_pushButton_addSouvenir_clicked();
        void on_pushButton_updateSouvenir_clicked();
        void on_pushButton_deleteSouvenir_clicked();
        void on_pushButton_submitAddUpdate_clicked();
        void on_pushButton_cancelAddUpdate_clicked();


        void on_pushButton_updateStadiumInfo_clicked();
        void on_pushButton_cancelAddUpdate_2_clicked();
        void on_pushButton_submitUpdateStadium_clicked();
        void on_pushButton_AddDataFromFile_clicked();
        void setFonts();

private:
        Ui::AdminWindow *ui;

        // Models
        TeamsModel     teamsModel;
        StadiumsModel  stadiumsModel;
        SouvenirsModel souvenirsModel;
        DistancesModel distancesModel;

        STRING addOrUpdate;

        // Loads / configures table views
        void setTableModels();
        void setTableSortOptions();
        void setStadiumInfo();
        void autoSizeTableView();

        // Resets input fields
        void clearAddUpdateInputFields();

        // Add, update, delete
        void addSouvenir();
        void updateSouvenir();

        // Set buttons
        void setRadioButtons();
};

#endif // ADMINWINDOW_H
