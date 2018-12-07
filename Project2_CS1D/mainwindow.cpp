#include "mainwindow.h"
#include "adminwindow.h"
#include "ui_mainwindow.h"
#include "trip.h"
#include "distances.h"
#include "mstgraph.h"
#include <QMessageBox>
#include <QSpacerItem>
#include <QGridLayout>
#include "databasemanager.h"
#include "distancesmodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    DistancesModel test;
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);

    setTableModelConfigs();
    setFonts();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************************************************************
 *=============================================================================
 *                       TABLE MODEL DISPLAY CONFIGURATIONS
 ******************************************************************************/

/***************************************************************************//**
 * @brief MainWindow::setTableModelConfigs
 * Loads up the Table views with the team model
 ******************************************************************************/
void MainWindow::setTableModelConfigs()
{
    // VIEW TEAM / STADIUM INFO TABLES
    ui->tableView_StadiumData->setModel(teamsModel.getSortedModel());
    ui->tableView_StadiumData->verticalHeader()->setVisible(false);
    ui->tableView_StadiumData->horizontalHeader()->setVisible(true);
    ui->tableView_StadiumData->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    QModelIndex newIndex = ui->tableView_StadiumData->model()->index(0,0); // index(row, column)
    ui->tableView_StadiumData->setCurrentIndex(newIndex);
    ui->tableView_StadiumData->clicked(newIndex);
    hideExtraColumns();
    autoSizeTableView(ui->tableView_StadiumData);

    // Custom Trip Combo Box (Start Location)
    QStringList list = teamsModel.getTeamNames();
    ui->comboBox_customStartPoint->addItems(list);


    // Custom Trip Table
    ui->tableView_CustomStopsTable->setModel(teamsModel.getSortedModel());
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_COACH_NAME, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_CONFERENCE, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_DIVISION, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_LOCATION, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_STADIUM_NAME, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_YEAR_JOINED, true);
    ui->tableView_CustomStopsTable->setColumnHidden(TEAMS_SEAT_CAP, true);
    autoSizeTableView(ui->tableView_CustomStopsTable);

    // Souvenir Table Setup
    ui->tableView_stadiumSouvenirs_2->setModel(souvenirsModel.getSortedModel());

}

/***************************************************************************//**
 * @brief MainWindow::hideExtraColumns
 * Hides all columns besides Team name and Stadium name, used to reset filters
 * and sorts
 ******************************************************************************/
void MainWindow::hideExtraColumns()
{
    ui->tableView_StadiumData->setColumnHidden(TEAMS_LOCATION, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_STADIUM_NAME, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_SEAT_CAP, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_COACH_NAME, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_CONFERENCE, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_DIVISION, true);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_YEAR_JOINED, true);
    ui->label_extraInfo->hide();
}

/***************************************************************************//**
 * @brief MainWindow::autoSizeTableView
 * @param table
 * Accepts in as an argument a pointer to ta table view. The tableview referenced
 * by the param table is then horizontally stretched to fill entire width of
 * table view.
 ******************************************************************************/
void MainWindow::autoSizeTableView(QTableView *table)
{
    int MAX_COLS = table->horizontalHeader()->count();
    for (int colIndex = 0; colIndex < MAX_COLS ; ++colIndex)
    {
        table->horizontalHeader()->setSectionResizeMode(colIndex, QHeaderView::Stretch);
    }
}

/***************************************************************************//**
 * @brief MainWindow::setStadiumInfo
 *
 * This function sets the stadium info labels to the data associatd with
 * the user selected team. Data used is stored in class member variable
 * 'stadiumTableRowData'.
 ******************************************************************************/
void MainWindow::setStadiumInfo()
{
    int number = teamsModel.getSelectedRowItem(TEAMS_SEAT_CAP).toInt();

    ui->label_stadiumName->setText(stadiumsModel.getSelectedRowItem(TEAMS_STADIUM_NAME));
    ui->label_seatingCap->setText(QLocale(QLocale::English).toString(number));
    ui->label_location->setText(teamsModel.getSelectedRowItem(TEAMS_LOCATION));
    ui->label_Conference->setText(teamsModel.getSelectedRowItem(TEAMS_CONFERENCE));
    ui->label_yearJoined->setText(teamsModel.getSelectedRowItem(TEAMS_YEAR_JOINED));
    ui->label_Coach->setText(teamsModel.getSelectedRowItem(TEAMS_COACH_NAME));
    ui->label_Division->setText(teamsModel.getSelectedRowItem(TEAMS_DIVISION));
    ui->label_teamNameHeader->setText(teamsModel.getSelectedRowItem(TEAMS_TEAM_NAME));
    ui->label_teamNameHeader_2->setText(teamsModel.getSelectedRowItem(TEAMS_TEAM_NAME));
}


void MainWindow::on_tableView_StadiumData_clicked(const QModelIndex &index)
{
    QRegExp regex;

    STRING stadiumOfSelectedTeam;
    int    teamTableRow = index.row();
    teamsModel.setSelectedRowData(teamTableRow);

    stadiumOfSelectedTeam = teamsModel.getSelectedRowItem(TEAMS_TEAM_NAME);
    regex.setPattern(stadiumOfSelectedTeam);

    stadiumsModel.setFilter(regex);
    souvenirsModel.setFilter(regex);

   // Set to zero because the above filter will filter the stadium model so there is only 1 entery in it
    stadiumsModel.setSelectedRowData(0);

    setStadiumInfo();
    setImageToTeamLogo();

}


void MainWindow::on_radioButton_EasternFilter_clicked()
{
    hideExtraColumns();
    clearFilters();

    QRegExp regex;
    regex.setPattern("Eastern");

    teamsModel.setFilterColumn(TEAMS_CONFERENCE);
    teamsModel.setFilter(regex);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);

}


void MainWindow::on_radioButton_WesternFilter_clicked()
{
    hideExtraColumns();
    clearFilters();

    QRegExp regex;
    regex.setPattern("Western");

    teamsModel.setFilterColumn(TEAMS_CONFERENCE);
    teamsModel.setFilter(regex);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);

}


void MainWindow::on_radioButton_coachFilter_clicked()
{
    hideExtraColumns();
    clearFilters();

    QRegExp regex;

    teamsModel.setFilterColumn(TEAMS_COACH_NAME);
    ui->tableView_StadiumData->setColumnHidden(TEAMS_COACH_NAME, false);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);
}


void MainWindow::clearFilters()
{
    hideExtraColumns();

    QRegExp regex;
    regex.setPattern(".*");

    teamsModel.setFilterColumn(TEAMS_TEAM_NAME);
    teamsModel.setFilter(regex);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);

}


void MainWindow::on_radioButton_southEastFilter_clicked()
{
    hideExtraColumns();

    QRegExp regex;
    regex.setPattern("Southeast");

    teamsModel.setFilterColumn(TEAMS_DIVISION);
    teamsModel.setFilter(regex);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);
}


void MainWindow::on_radioButton_southWestFilter_clicked()
{
    hideExtraColumns();

    QRegExp regex;
    regex.setPattern("Southwest");

    teamsModel.setFilterColumn(TEAMS_DIVISION);
    teamsModel.setFilter(regex);
    ui->tableView_StadiumData->sortByColumn(TEAMS_TEAM_NAME, Qt::AscendingOrder);
}


void MainWindow::on_radioButton_sortYearJoined_clicked()
{ 
    setGenericSortOptions(TEAMS_YEAR_JOINED);
}

void MainWindow::on_radioButton_seatingCap_clicked()
{

    setGenericSortOptions(TEAMS_SEAT_CAP);
    int seatingCap = teamsModel.getSeatingCapTotal();

    ui->label_extraInfo->setText("Total Seating Capacity: " + QLocale(QLocale::English).toString(seatingCap));
    ui->label_extraInfo->show();
}

void MainWindow::on_radioButton_sortTeamName_clicked()
{  
    setGenericSortOptions(TEAMS_TEAM_NAME);
}

void MainWindow::on_radioButton_sortStadiumName_clicked()
{
    setGenericSortOptions(TEAMS_STADIUM_NAME);
}

void MainWindow::setGenericSortOptions(teamsColumns columnToSortBy)
{
    hideExtraColumns();
    clearFilters();

    ui->tableView_StadiumData->setColumnHidden(columnToSortBy, false);
    ui->tableView_StadiumData->sortByColumn(columnToSortBy, Qt::AscendingOrder);
}

                /************************************
                 *===================================
                 *     Related to Souvenirs Table
                 ************************************/


/***************************************************************************//**
 * @brief MainWindow::on_tableView_stadiumSouvenirs_2_clicked
 * @param index
 *
 * sets the 'Selected Item' field to the name of the user selected item from the
 * souvenir table. Used for purchasing;
 *
 ******************************************************************************/
void MainWindow::on_tableView_stadiumSouvenirs_2_clicked(const QModelIndex &index)
{
    QPainter p;
    int    souvenirRow = index.row();

    souvenirsModel.setSelectedRowData(souvenirRow);
}


/******************************************************************************
 *=============================================================================
 *                       LOGIN METHODS
 ******************************************************************************/

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_submitLogin_clicked
 *
 * When user presses 'sign in' button, the input fields text is
 * used as admin login credentials.
 * If no matching username / password is found an error message is output
 * else the program will open new window.
 ******************************************************************************/
void MainWindow::on_pushButton_submitLogin_clicked()
{
    STRING username = ui->lineEdit_userName->text().trimmed();
    STRING password = ui->lineEdit_password->text().trimmed();

    admin = new AdminTableModel(username, password);

    if(admin->isMissingFields())
    {
         QMessageBox::critical(this,tr("Missing Input!"), admin->getErrorMessage() );
    }
    else
    {
        if(admin->isValidUser())
        {
            AdminWindow *adminPage = new AdminWindow;
            adminPage->show();
            this->close();
        }
        else
        {
            ui->label_loginStatus->setText("Invalid username or password");
            ui->label_loginStatus->setStyleSheet("QLabel#label_loginStatus{color: red;font-size:15px;font-family:'Harmonia Sans Pro,Arial,sans-serif';}");
        }
    }

    // Resets Fields
    ui->lineEdit_userName->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_userName->setFocus();

    delete admin;
}

/***************************************************************************//**
 * @brief MainWindow::on_lineEdit_userName_returnPressed
 *
 * Simulates pressing 'login' button when return is pressed
 * (When username input field is in focus)
 ******************************************************************************/
void MainWindow::on_lineEdit_userName_returnPressed()
{
    ui->pushButton_submitLogin->click();
}

/***************************************************************************//**
 * @brief MainWindow::on_lineEdit_password_returnPressed
 *
 * Simulates pressing 'login' button when return is pressed
 * (When password input field is in focus)
 ******************************************************************************/
void MainWindow::on_lineEdit_password_returnPressed()
{
     ui->pushButton_submitLogin->click();
}


/******************************************************************************
 *=============================================================================
 *                          BUTTON ACTION SLOTS FOR NAVIGATION
 ******************************************************************************/

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_ToAdminLoginPage_clicked
 *
 * Navigates to the Admin Login Page
 ******************************************************************************/
void MainWindow::on_pushButton_ToAdminLoginPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(ADMIN_LOGIN_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_cancelLogin_clicked
 *
 * Navigates from the login page to the Main Home Page
 ******************************************************************************/
void MainWindow::on_pushButton_cancelLogin_clicked()
{
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
    ui->label_loginStatus->clear();
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_ToPlanTripPage_clicked
 *
 * Navigates from the Main page to the Custom Trip Page
 ******************************************************************************/
void MainWindow::on_pushButton_ToPlanTripPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(CUSTOM_TRIP_PAGE);
}


/***************************************************************************//**
 * @brief MainWindow::on_pushButton_ToViewStadiumsPage_clicked
 *
 * Navigates from the Main page to the View Stadiums Page
 ******************************************************************************/
void MainWindow::on_pushButton_ToViewStadiumsPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(VIEW_STADIUM_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_toViewSingleTeamPage_clicked
 *
 * Navigates from the stadiums page to the single team info page
 ******************************************************************************/
void MainWindow::on_pushButton_toViewSingleTeamPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(VIEW_TEAM_INFO_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_toViewSouvenirsTeamPage_clicked
 *
 * Navigates from the stadiums page to the single team souvenir page
 ******************************************************************************/
void MainWindow::on_pushButton_toViewSouvenirsPage_clicked()
{
    QImage image(":Resources/Images/Basketball.jpg");
    QPainter p;

    p.begin(&image);
    p.setCompositionMode(QPainter::CompositionMode_DestinationIn);
    p.fillRect(image.rect(), QColor(0,0,0,215));
    p.end();
    ui->label_singleTeamSouvBackground->setPixmap(QPixmap::fromImage(image));

    autoSizeTableView(ui->tableView_stadiumSouvenirs_2);
    ui->tableView_stadiumSouvenirs_2->setColumnHidden(SOUVENIRS_STADIUM_NAME, true);

    ui->stackedWidget->setCurrentIndex(VIEW_TEAM_SOUV_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_backToHome_3_clicked
 *
 * Navigates from the single team info page back to the stadiums page
 ******************************************************************************/
void MainWindow::on_pushButton_backToHome_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(VIEW_STADIUM_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_backToHome_7_clicked
 *
 * Navigates from the team souvenirs info page back to the stadiums page
 ******************************************************************************/
void MainWindow::on_pushButton_backToHome_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(VIEW_STADIUM_PAGE);
}

/***************************************************************************//**
 * @brief MainWindow::on_pushButton_backToHome_2_clicked
 *
 * Navigates from the stadiums page back to the home page
 ******************************************************************************/
void MainWindow::on_pushButton_backToHome_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
}



/***************************************************************************//**
 * @brief MainWindow::on_pushButton_backToHome_6_clicked
 *
 * Navigates back to main home page
 ******************************************************************************/
void MainWindow::on_pushButton_backToHome_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(PLAN_TRIP_PAGE);
}


void MainWindow::setFonts()
{
    QFontDatabase::addApplicationFont(":/Resources/Fonts/the-fontry_old-sport/OLD SPORT 01 COLLEGE NCV.ttf");
    QFontDatabase::addApplicationFont(":/Resources/Fonts/the-fontry_old-sport/OLD SPORT 02 ATHLETIC NCV.ttf");
    QFontDatabase::addApplicationFont(":/Resources/Fonts/richardson-sports/NCAA Michigan St Spartans.otf");
    QFontDatabase::addApplicationFont(":/Resources/Fonts/richardson-sports/Richardson Brand United.otf");

    QFont fontOldSport  = QFont("OLD SPORT 01 COLLEGE NCV", 42, 1);
    QFont fontMichSt    = QFont("NCAA Michigan St Spartans", 50, 1);
    QFont fontrichAccel = QFont("Richardson Brand United", 40, 1);

    ui->label_teamNameHeader->setFont(fontOldSport);
    ui->label_teamSouvenirsHeader->setFont(fontrichAccel);
    ui->label_teamNameHeader_2->setFont(fontOldSport);
    ui->label_NavPageTitleHeader->setFont(fontMichSt);
}


void MainWindow::setImageToTeamLogo()
{
    QString team = teamsModel.getSelectedRowItem(TEAMS_TEAM_NAME);
    QImage  image(":/Resources/Icons/" + team + ".png");
    QPixmap pixmap = QPixmap::fromImage(image);
    QPainter p;

    p.begin(&pixmap);
    p.setCompositionMode(QPainter::CompositionMode_DestinationIn);
    p.fillRect(image.rect(), QColor(0, 0, 0, 50));
    p.end();
    ui->label_Logo->setPixmap(pixmap);
}


void MainWindow::on_pushButton_NBALogoHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
}

void MainWindow::on_pushButton_AddCustomStop_clicked()
{
    int row = ui->tableView_CustomStopsTable->selectionModel()->currentIndex().row();
    std::string userSelectedStop  = ui->tableView_CustomStopsTable->model()->data(ui->tableView_CustomStopsTable
                                                                                       ->model()->index(row,1)).toString().toUtf8().constData();
    if(customStops.count(userSelectedStop) == 1)
    {
        qDebug() << ("Already Selected");
    }
    else
    {
        qDebug() << ("Adding" + QString::fromStdString(userSelectedStop));
        customStops[userSelectedStop];
        trip.addNewCustomStop(QString::fromStdString(userSelectedStop));
    }

}

void MainWindow::loadPageActions(STRING nextStop)
{
     QRegExp pat;

    ui->stackedWidget->setCurrentIndex(TRIP_STOP_PAGE);
    ui->label_tripStopHeader->setText(nextStop);

    pat.setPattern(nextStop);
    souvenirsModel.setFilter(pat);
    souvenirsModel.setFilterColumn(SOUVENIRS_STADIUM_NAME);
    autoSizeTableView(ui->tableView_stadiumSouvenirs);
    ui->tableView_stadiumSouvenirs->setColumnHidden(SOUVENIRS_STADIUM_NAME, true);
}

void MainWindow::on_pushButton_StartCustomTrip_clicked()
{
    dbConn = DatabaseManager::getInstance();
    std:: string userSelectedStartStadium = ui->comboBox_customStartPoint->currentText().toUtf8().constData();
    bool fastestRoute = ui->checkBox_takeFastestRoute->isChecked();


    if(fastestRoute)
    {
        mstGraph myGraph(dbConn->getDistances());
        QString MST = myGraph.getMstPrintout();
        qDebug() << MST;
        QMessageBox about;
        about.setText(MST);
        about.setStandardButtons(QMessageBox::Ok);
        QSpacerItem* horizontalSpacer = new QSpacerItem(590,0,QSizePolicy::Minimum,QSizePolicy::Expanding);
        QGridLayout* layout = (QGridLayout*)about.layout();
        layout->addItem(horizontalSpacer,layout->rowCount(),0,1,layout->columnCount());
        about.exec();
    }
    else
    {
        trip.addNewCustomStop(QString::fromStdString(userSelectedStartStadium));
        trip.startCustomOrder();
        loadPageActions(trip.getNextStop());
    }
}
