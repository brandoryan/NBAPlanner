#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
    setTableModels();
    setTableSortOptions();
    autoSizeTableView();
    setFonts();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

/******************************************************************************
 *=============================================================================
 *                       TABLE MODEL DISPLAY CONFIGURATIONS
 ******************************************************************************/
/***************************************************************************//**
 * @brief AdminPage::setTableModels
 * Loads up the Table views with the team model
 ******************************************************************************/
void AdminWindow::setTableModels()
{
    ui->tableView_Teams->setModel(teamsModel.getSortedModel());
    ui->tableView_Souveniers->setModel(souvenirsModel.getSortedModel());
}

/***************************************************************************//**
 * @brief AdminPage::setTableSortOptions
 *
 * Sets defualt configurations for table Views
 ******************************************************************************/
void AdminWindow::setTableSortOptions()
{
    ui->tableView_Teams->setSortingEnabled(true);
    ui->tableView_Teams->verticalHeader()->setVisible(false);
    ui->tableView_Teams->horizontalHeader()->setVisible(false);
    ui->tableView_Teams->setColumnHidden(1, true);
    ui->tableView_Teams->setColumnHidden(2, true);
    ui->tableView_Teams->setColumnHidden(3, true);
    ui->tableView_Teams->setColumnHidden(4, true);
    ui->tableView_Teams->setColumnHidden(5, true);
    ui->tableView_Teams->setColumnHidden(6, true);
    ui->tableView_Teams->setColumnHidden(7, true);
    ui->tableView_Teams->sortByColumn(0, Qt::AscendingOrder);

    ui->tableView_Souveniers->setSortingEnabled(true);
    ui->tableView_Souveniers->verticalHeader()->setVisible(false);
    ui->tableView_Souveniers->setColumnHidden(2, true);


    ui->tableView_Teams->setCurrentIndex(ui->tableView_Teams->model()->index(0,0));
    ui->tableView_Teams->clicked(ui->tableView_Teams->model()->index(0,0));

}

void AdminWindow::setFonts()
{
    QFontDatabase::addApplicationFont(":/Resources/Fonts/richardson-sports/NCAA Michigan St Spartans.otf");

    QFont fontMichSt = QFont("NCAA Michigan St Spartans", 50, 1);
    ui->label_NavPageTitleHeader->setFont(fontMichSt);
}

void AdminWindow::autoSizeTableView()
{
    int MAX_COLS = ui->tableView_Teams->horizontalHeader()->count();
    for (int colIndex = 0; colIndex < MAX_COLS ; ++colIndex)
    {
        ui->tableView_Teams->horizontalHeader()
                ->setSectionResizeMode(colIndex, QHeaderView::Stretch);
    }

    MAX_COLS = ui->tableView_Souveniers->horizontalHeader()->count();
    for (int colIndex = 0; colIndex < MAX_COLS ; ++colIndex)
    {
        ui->tableView_Souveniers->horizontalHeader()
                ->setSectionResizeMode(colIndex, QHeaderView::Stretch);
    }

}

/***************************************************************************//**
 * @brief AdminWindow::setStadiumInfo
 *
 * This function sets the stadium info labels to the data associatd with
 * the user selected team. Data used is stored in class member variable
 * 'stadiumTableRowData'.
 ******************************************************************************/
void AdminWindow::setStadiumInfo()
{
    ui->label_stadiumName->setText(stadiumsModel.getSelectedRowItem(STADIUMS_STADIUM_NAME));
    ui->label_seatingCap->setText(teamsModel.getSelectedRowItem(TEAMS_SEAT_CAP));
    ui->label_location->setText(teamsModel.getSelectedRowItem(TEAMS_LOCATION));
    ui->label_conference->setText(teamsModel.getSelectedRowItem(TEAMS_CONFERENCE));
    ui->label_division->setText(teamsModel.getSelectedRowItem(TEAMS_DIVISION));
    ui->label_yearJoined->setText(teamsModel.getSelectedRowItem(TEAMS_YEAR_JOINED));
    ui->label_coach->setText(teamsModel.getSelectedRowItem(TEAMS_COACH_NAME));
}

/***************************************************************************//**
 * @brief AdminWindow::on_tableView_Teams_clicked
 * @param index
 *
 * This function is used to filter the stadium and souvenir tables to
 * only show items associated with the user selected team.
 ******************************************************************************/
void AdminWindow::on_tableView_Teams_clicked(const QModelIndex &index)
{
    QRegExp regex;

    STRING stadiumOfSelectedTeam;
    int    teamTableRow = index.row();
    teamsModel.setSelectedRowData(teamTableRow);

    stadiumOfSelectedTeam = teamsModel.getSelectedRowItem(TEAMS_STADIUM_NAME);

    regex.setPattern(stadiumOfSelectedTeam);

    stadiumsModel.setFilter(regex);
    souvenirsModel.setFilter(regex);

    // Set to zero because the above filter will filter the stadium model so there is only 1 entery in it
    stadiumsModel.setSelectedRowData(0);

    setStadiumInfo();

}

/***************************************************************************//**
 * @brief AdminWindow::on_tableView_Souveniers_clicked
 * @param index
 *
 * calls function that extracts data from user selected row and stores data
 * in class member vector 'souvenierTableRowData'
 ******************************************************************************/
void AdminWindow::on_tableView_Souveniers_clicked(const QModelIndex &index)
{
    souvenirsModel.setSelectedRowData(index.row());
}



/******************************************************************************
 *=============================================================================
 *                      ADMIN METHODS (ADD, UPDATE, DELETE)
 ******************************************************************************/

/***************************************************************************//**
 * @brief AdminPage::on_pushButton_submitAddUpdate_clicked
 *
 * The same page is used for both "Add" and "Update" menu items, So depending
 * what the current addOrUpdate value is, the function will either call addItem,
 * or update().
 ******************************************************************************/
void AdminWindow::on_pushButton_submitAddUpdate_clicked()
{

    if(ui->lineEdit_souvenirName->text().isEmpty() || ui->doubleSpinBox_souvenirPrice->text().isEmpty() )
    {

        QMessageBox::critical(this, tr("ERROR"), STRING("Input Fields Cannot Be Blank!") );
    }
    else if( ui->doubleSpinBox_souvenirPrice->text().toDouble() < .99)
    {
        QMessageBox::critical(this, tr("ERROR"), STRING("Price must be at least .99") );
    }
    else
    {
        if(addOrUpdate=="Add")
            addSouvenir();
        else
            updateSouvenir();

        clearAddUpdateInputFields();
        ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
    }

}

/***************************************************************************//**
 * @brief AdminWindow::addSouvenir
 *
 * Uses extracted user data to add the souvenir and price to the database
 * table (souvenirs)
 ******************************************************************************/
void AdminWindow::addSouvenir()
{
    STRING souvenirName = ui->lineEdit_souvenirName->text();
    double price        = ui->doubleSpinBox_souvenirPrice->text().toDouble();
    STRING stadiumName  = teamsModel.getSelectedRowItem(TEAMS_STADIUM_NAME);

    try
    {
        souvenirsModel.addSouvenir(souvenirName, price, stadiumName);
        QMessageBox::information(this, tr("Souvenir Added"), STRING(souvenirName + " was successfully added!") );
    }
    catch(STRING err)
    {
        QMessageBox::critical(this,STRING(souvenirName + " was not added"),err);
    }
}

/***************************************************************************//**
 * @brief AdminWindow::updateSouvenir
 *
 * Uses extracted user data to update the souvenir price to the database
 * table (souvenirs)
 ******************************************************************************/
void AdminWindow::updateSouvenir()
{
    STRING souvenirName = ui->lineEdit_souvenirName->text();
    double price        = ui->doubleSpinBox_souvenirPrice->text().toDouble();
    STRING stadiumName  = teamsModel.getSelectedRowItem(TEAMS_STADIUM_NAME);

    try
    {
        souvenirsModel.updateSouvenir(souvenirName, price, stadiumName);
        QMessageBox::information(this, tr("Souvenir Updated"), STRING(souvenirName + " was successfully Updated!") );

    }
    catch(STRING err)
    {
        QMessageBox::critical(this,STRING(souvenirName + " was not updated"),err);
    }
}


/***************************************************************************//**
 * @brief AdminWindow::on_pushButton_deleteSouvenir_clicked
 *
 * Extracts data associated with the user selcted row (Souvenir Items).
 * Prompts user if they are sure they want to delete the selected item.
 * If User selects yes, class member(SouvenirModel souvenirModel) then calls
 * .deleteSouvenir() using the previously extracted data. As a result the
 * souvenir item is permenantly deleted from the database.
 ******************************************************************************/
void AdminWindow::on_pushButton_deleteSouvenir_clicked()
{

    if(ui->tableView_Souveniers->selectionModel()->currentIndex().isValid())
    {
        STRING itemName  = souvenirsModel.getSelectedRowItem(SOUVENIRS_ITEM_NAME);
        double itemPrice = souvenirsModel.getSelectedRowItem(SOUVENIRS_ITEM_PRICE).toDouble();
        STRING stadium   = souvenirsModel.getSelectedRowItem(SOUVENIRS_STADIUM_NAME);

        STRING   message     = "Are you sure you want to delete " +itemName + " ?";

        QMessageBox::StandardButton userResponse;
        userResponse = QMessageBox::warning(this, tr("Delete Souvenir Item"),message,
                                            QMessageBox::Ok | QMessageBox::Cancel);

        if(QMessageBox::Ok == userResponse)
        {
            try
            {
                souvenirsModel.deleteSouvenir(itemName, itemPrice, stadium);
                QMessageBox::information(this,tr("Removed!"),
                                         STRING(itemName + " was successfully removed!"));
            }
            catch(STRING error)
            {
                QMessageBox::critical(this,STRING(itemName + " was not deleted"),error);
            }
        }

    }
    else
    {

        QMessageBox::StandardButton errorBox;
        STRING errorMessage = "Please select an item to be deleted";
        errorBox = QMessageBox::warning(this, "No Souvenir Selected", errorMessage);

    }
}


/******************************************************************************
 *=============================================================================
 *                      PAGE NAVIGATION METHODS
 ******************************************************************************/
void AdminWindow::on_pushButton_adminLogout_clicked()
{
    MainWindow *main = new MainWindow;
    main->show();
    this->close();
}


void AdminWindow::on_pushButton_addSouvenir_clicked()
{
    addOrUpdate = "Add";
    ui->stackedWidget->setCurrentIndex(ADD_UPDATE_SOUVENIR_PAGE);

    ui->label_addUpdateHEader->setText("Add New Souvenir");
    ui->lineEdit_souvenirName->setReadOnly(false);
}

void AdminWindow::on_pushButton_updateSouvenir_clicked()
{
    addOrUpdate = "Update";
    if(ui->tableView_Souveniers->selectionModel()->currentIndex().isValid()){

        ui->stackedWidget->setCurrentIndex(ADD_UPDATE_SOUVENIR_PAGE);
        ui->label_addUpdateHEader->setText("Update Souvenir");
        ui->lineEdit_souvenirName->setText(souvenirsModel.getSelectedRowItem(SOUVENIRS_ITEM_NAME));
        ui->lineEdit_souvenirName->setReadOnly(true);
        ui->doubleSpinBox_souvenirPrice->setValue(souvenirsModel.getSelectedRowItem(SOUVENIRS_ITEM_PRICE).toDouble());
    }
    else
    {
        QMessageBox::StandardButton errorBox;
        STRING errorMessage = "Please select an item to be edited";
        errorBox = QMessageBox::warning(this, "No Souvenir Selected", errorMessage);

    }

}

void AdminWindow::on_pushButton_cancelAddUpdate_clicked()
{
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
    clearAddUpdateInputFields();
}

void AdminWindow::on_pushButton_cancelAddUpdate_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
}


/******************************************************************************
 *=============================================================================
 *                      MISC METHODS
 ******************************************************************************/

/***************************************************************************//**
 * @brief AdminWindow::clearAddUpdateInputFields
 *
 * Clears line edit and doubleSpin box values. Used to 'reset' values when
 * adding or updating souvenirs
 ******************************************************************************/
void AdminWindow::clearAddUpdateInputFields()
{
    ui->lineEdit_souvenirName->clear();
    ui->doubleSpinBox_souvenirPrice->setValue(.99);
}


void AdminWindow::on_pushButton_AddDataFromFile_clicked()
{
    try
    {
        stadiumsModel.addExpansionTeams();
        teamsModel.refreshModel();
        souvenirsModel.refreshModel();
        distancesModel.refreshModel();

    }catch(STRING error)
    {
        QMessageBox::information(this,tr("Expand Teams"), STRING("No new teams to add!"));
    }


}

void AdminWindow::on_pushButton_submitUpdateStadium_clicked()
{
    STRING stadiumName      = stadiumsModel.getSelectedRowItem(STADIUMS_STADIUM_NAME);
    STRING userStadium      = ui->lineEdit_StadiumName->text();
    STRING location         = ui->lineEdit_Location->text();
    int    seatingCap       = ui->spinBox_SeatinCap->value();

    qDebug() << (userStadium);

    if(seatingCap < 10000 || seatingCap > 500000 )
    {
        QMessageBox::critical(this, tr("ERROR"), STRING("Invalid Seating Capacity, Please input a number between 10,000 and 500,000") );
    }

    else if (userStadium.isEmpty() || location.isEmpty())
    {
        QMessageBox::critical(this, tr("ERROR"), STRING("Input Fields Cannot Be Blank!") );
    }
    else
    {
        try
        {
            stadiumsModel.updateStadium(stadiumName, seatingCap);
            teamsModel.updateTeam(stadiumName, location, seatingCap);

            if(stadiumName != userStadium)
            {
                qDebug() << ("Updating stadiumName");

                stadiumsModel.updateStadiumName(stadiumName, userStadium);
                teamsModel.updateTeam(stadiumName, location, seatingCap);
                teamsModel.refreshModel();
                stadiumsModel.refreshModel();
                souvenirsModel.refreshModel();
                distancesModel.refreshModel();
            }
            QMessageBox::information(this, tr("Stadium Updated"), STRING(stadiumName + " was successfully Updated!") );
        }
        catch(STRING err)
        {
            QMessageBox::critical(this,STRING(stadiumName + " was not updated"),err);

        }

        ui->stackedWidget->setCurrentIndex(MAIN_HOME_WINDOW);
        ui->tableView_Teams->setCurrentIndex(ui->tableView_Teams->model()->index(0,0));
        ui->tableView_Teams->clicked(ui->tableView_Teams->model()->index(0,0));
    }

}

/***************************************************************************//**
 * @brief AdminPage::on_pushButton_updateStadiumInfo_clicked
 *
 * Navigates from add/update souvenir page to the main home admin page
 ******************************************************************************/
void AdminWindow::on_pushButton_updateStadiumInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(UPDATE_STADIUM_PAGE);
    ui->label_addUpdateHEader_2->setText("Update " + stadiumsModel.getSelectedRowItem(STADIUMS_STADIUM_NAME));
    ui->spinBox_SeatinCap->setValue(teamsModel.getSelectedRowItem(TEAMS_SEAT_CAP).toInt());
    ui->lineEdit_Location->setText(teamsModel.getSelectedRowItem(TEAMS_LOCATION));
    ui->lineEdit_StadiumName->setText(stadiumsModel.getSelectedRowItem(STADIUMS_STADIUM_NAME));
}

