#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFontDatabase>
#include <QMainWindow>
#include <QTableView>
#include <QMovie>
#include <QPainter>
#include <unordered_map>
#include "admintablemodel.h"
#include "teamsmodel.h"
#include "stadiumsmodel.h"
#include "souvenirsmodel.h"
//#include "graph.h"
//#include "trip.h"

enum MainWindowPages
{
    MAIN_HOME_WINDOW,
    ADMIN_LOGIN_PAGE,
    VIEW_TEAM_INFO_PAGE,
    VIEW_TEAM_SOUV_PAGE,
    VIEW_STADIUM_PAGE,
    PLAN_TRIP_PAGE,
    CUSTOM_TRIP_DIJKSTRA_PAGE,
    CUSTOM_TRIP_PAGE,
    TRIP_STOP_PAGE,
    TRIP_LOAD_PAGE,
    TRIP_ENDED_PAGE,
    VIEW_MST_PAGE
};

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private slots:

        // Used for page navigation
        void on_pushButton_ToAdminLoginPage_clicked();
        void on_pushButton_NBALogoHome_clicked();
        void on_pushButton_cancelLogin_clicked();
        void on_pushButton_ToPlanTripPage_clicked();
        void on_pushButton_ToViewStadiumsPage_clicked();
        void on_pushButton_backToHome_3_clicked();
        void on_pushButton_backToHome_2_clicked();
        void on_pushButton_toViewSingleTeamPage_clicked();
        void on_pushButton_toViewSouvenirsPage_clicked();
        void on_pushButton_backToHome_clicked();
        void on_pushButton_backToHome_6_clicked();
        void on_pushButton_backToHome_7_clicked();
        void on_pushButton_AddCustomStop_clicked();

        // Custom trip
        void on_pushButton_StartCustomTrip_clicked();

        // Used for Admin Login
        void on_pushButton_submitLogin_clicked();
        void on_lineEdit_userName_returnPressed();
        void on_lineEdit_password_returnPressed();

        // Table Filter Actions
        void on_radioButton_EasternFilter_clicked();
        void on_radioButton_WesternFilter_clicked();
        void on_radioButton_southEastFilter_clicked();
        void on_radioButton_southWestFilter_clicked();
        void on_radioButton_coachFilter_clicked();


        // Table Sort Actions
        void setGenericSortOptions(teamsColumns columnToSortBy);
        void on_radioButton_sortTeamName_clicked();
        void on_radioButton_sortStadiumName_clicked();
        void on_radioButton_sortYearJoined_clicked();
        void on_radioButton_seatingCap_clicked();

        // Get User Table Selection
        void on_tableView_StadiumData_clicked(const QModelIndex &index);
        void on_tableView_stadiumSouvenirs_2_clicked(const QModelIndex &index);

private:
        Ui::MainWindow *ui;

        // Interface to database - handles logic
        AdminTableModel *admin;
        TeamsModel     teamsModel;
        StadiumsModel  stadiumsModel;
        SouvenirsModel souvenirsModel;

        // Table configuration setup
        void setFonts();
        void setTableModelConfigs();
        void autoSizeTableView(QTableView *table);
        void setStadiumInfo();
        void hideExtraColumns();
        void clearFilters();
        void loadPageActions(STRING nextStop);

        void setColHeaderWidth();
        void setImageToTeamLogo();
};

#endif // MAINWINDOW_H
