#include "databasemanager.h"

/******************************************************************************
 *=============================================================================
 *                   CONSTRUCTOR / DECONSTRUCTOR / GET INSTANCE
 *
 * This database class uses the singleton design pattern.
 * When created the constructor will check if a .db file exists in the
 * BUILD folder. If no file exist, a new default database will be created
 * with tables and table data initialized via read from file functions.
 ******************************************************************************/

// Sets static singleton variable to NULL
DatabaseManager* DatabaseManager::_instance = NULL;

/***************************************************************************//**
 * @brief DatabaseManager::DatabaseManager()
 * ----------------------------------------------------------------------------
 * @details
 *        Private constructor is used here to ensure singleton design.
 *        Checks if a database file exists in BUILD folder, If so,
 *        a connection is made to the DB, if not, a defualt database is created.
 ******************************************************************************/
DatabaseManager::DatabaseManager()
{
    QFileInfo dbFileInfo("database.db");

    if( !(dbFileInfo.exists()) )
    {
        qDebug() << ("No database file exists in build directory: Initializing new default database;");
        qDebug() << ("New 'database.db' is located @\n"+ qApp->applicationDirPath());

        connectDB();
        createDatabase();
    }
    else
    {
        connectDB();
    }
}

/***************************************************************************//**
 * @brief DatabaseManager::GetInstance
 * @return Single instance of DatabaseManager obhect
 ******************************************************************************/
DatabaseManager* DatabaseManager::getInstance()
{
    if(_instance == NULL) { _instance = new DatabaseManager; }

    return _instance;
}

/***************************************************************************//**
 * @brief DatabaseManager::connectDB()
 * @return (bool) status  - status of database connection attempt
 ******************************************************************************/
bool DatabaseManager::connectDB()
{
    dbConn = QSqlDatabase::addDatabase("QSQLITE");
    dbConn.setDatabaseName("database.db");

    bool status = dbConn.open();

    return status;
}

/***************************************************************************//**
 * @brief DatabaseManager::closeDB()
 * closes database connection
 ******************************************************************************/
void DatabaseManager::closeDB()
{
    STRING connection;
    connection = dbConn.connectionName();
    dbConn.close();
    dbConn = QSqlDatabase();
    dbConn.removeDatabase(connection);
}

/******************************************************************************
 *=============================================================================
 *                       INTIALIZATION METHODS
 * - Below functions are use to initialize database with defualt values
 *   if none currently exist in build folder
 ******************************************************************************/

/***************************************************************************//**
 * @brief DatabaseManager::createDatabase
 * ----------------------------------------------------------------------------
 * @details This function is called if no database file is present in build
 *          folder. It generates all database tables, inserts default data,
 *          reads additional data in from file and inserts into respective
 *          tables.
 *
 *          A default Admin user will be automatically inserted
 *              user:     Admin
 *              password: Admin
 *
 ******************************************************************************/
void DatabaseManager::createDatabase()
{

    QSqlQuery query;

    initializeAdminTable(query);
    initializeTeamTable(query);
    initializeStadiumsTable(query);
    initializeSouvenirsTable(query);
    initializeDistancesTable(query);
    // Init Distances (fromStadium, toStadium, distance)


    // Adds entries to 'teams' and 'stadiums' table from file
    STRING restuarantFile = ":/Resources/Data/NBAdata.txt";
    STRING distancesFile = ":/Resources/Data/Distances.txt";
    readTeamAndStadiumsFromFile(restuarantFile);
    readDistancesFromFile(distancesFile);
}


/***************************************************************************//**
 * @brief DatabaseManager::initializeAdminTable(QSqlQuery query)
 * ----------------------------------------------------------------------------
 * @details Function Creates a new 'administrators' table and inserts default
 *          Administrator user into the table.
 *          This is only called if no db was present in build folder.
 *          userName is used as primary key and must be unique
 *
 * @param query (QSQL query) - Querry to be executed
 *
 * @see DatabaseManager::createDatabase();
 ******************************************************************************/
void DatabaseManager::initializeAdminTable(QSqlQuery query)
{
    query.exec("CREATE TABLE administrators( "
                      "userName     TEXT primary key, "
                      "password     TEXT"
               ");");

    query.exec("INSERT INTO administrators "
                    "(userName, password) "
               "VALUES "
                    "('Admin', 'Admin');");

}


void DatabaseManager::initializeTeamTable(QSqlQuery query)
{
    query.exec("CREATE TABLE teams( "
                      "teamName     TEXT primary key, "
                      "stadiumName  TEXT, "
                      "coachName    TEXT, "
                      "conferenceName   TEXT, "
                      "divisionName     TEXT, "
                      "location         TEXT, "
                      "yearJoined       INTEGER"
               ");");
}


void DatabaseManager::initializeStadiumsTable(QSqlQuery query)
{
    query.exec("CREATE TABLE stadiums( "
                      "stadiumName         TEXT, "
                      "seatingCap          INTEGER"
               ");");
}

void DatabaseManager::initializeSouvenirsTable(QSqlQuery query)
{
    query.exec("CREATE TABLE souvenirs( "
                      "itemName     TEXT, "
                      "itemPrice    REAL, "
                      "stadiumName  TEXT"
               ");");
}


void DatabaseManager::initializeDistancesTable(QSqlQuery query)
{
    query.exec("CREATE TABLE distances( "
                      "startStadium TEXT, "
                      "endStadium   TEXT, "
                      "distance     REAL"
               ");");
}


/***************************************************************************//**
 * @brief DatabaseManager::readTeamAndStadiumsFromFile
 * @param fileName
 *
 * reads data from file passed in as param and uses the data to add new entries
 * to stadiums and teams database table.
 *
 * Function is used in createDatabase() function to initialize default data
 *
 ******************************************************************************/
void DatabaseManager::readTeamAndStadiumsFromFile(STRING fileName)
{
    STRING teamName, stadiumName, coachName, location, conference, division;
    int    seatCap, yearJoined;

    QFile  inFile(fileName);

    // returns false if file cannot be opened
    if (!inFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << ("NBAData File Not Open");

    }

    QTextStream input (&inFile);

    while(!input.atEnd())
    {
        // GET  TABLE INFO
        conference    = input.readLine();
        division      = input.readLine();

        teamName      = input.readLine();
        location      = input.readLine();
        stadiumName   = input.readLine();

        seatCap       = input.readLine().toInt();
        yearJoined    = input.readLine().toInt();
        coachName     = input.readLine();

        input.skipWhiteSpace();

        addNewTeam(teamName, stadiumName, coachName, conference, division, location, yearJoined);
        addNewStadium(stadiumName, seatCap);

        // Adds default souvenir items to for each stadium
        STRING defaultSouvenirs[4] = {"Autographed Basketball", "Team Pennant", "Team Picture", "Team Jersey"};
        double defaultPricews[4]   = {49.89, 17.99, 29.99, 179.99};

        for(int i = 0; i < 4; i++){ addNewSouvenir(defaultSouvenirs[i], defaultPricews[i], stadiumName); }
    }

}


void DatabaseManager::readDistancesFromFile(STRING fileName)
{
    STRING startStadium, endStadium;
    double distance;

    QFile  inFile(fileName);

    // returns false if file cannot be opened
    if (!inFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << ("Stadium Distance File Not Open");

    }

    QTextStream input (&inFile);

    while(!input.atEnd())
    {
        // GET  TABLE INFO
        startStadium  = input.readLine();
        endStadium    = input.readLine();

        distance      = input.readLine().toDouble();

        qDebug() << (startStadium);
        qDebug() << (endStadium);
        qDebug() << (distance);
        addNewDistance(startStadium, endStadium, distance);
    }
}


void DatabaseManager::addNewTeam(const STRING &teamName,
                                 const STRING &stadiumName,
                                 const STRING &coachName,
                                 const STRING &conferenceName,
                                 const STRING &divisionName,
                                 const STRING &location,
                                 const int    &yrJoined)
{
    QSqlQuery query;

    query.prepare("INSERT into teams "
                        "(teamName, stadiumName, coachName, conferenceName, divisionName, location, yearJoined) "
                  "VALUES "
                        "(:teamName, :stadiumName, :coachName, :conferenceName, :divisionName, :location, :yrJoined)");

    query.bindValue(":teamName",    teamName);
    query.bindValue(":stadiumName", stadiumName);
    query.bindValue(":coachName",   coachName);
    query.bindValue(":conferenceName", conferenceName);
    query.bindValue(":divisionName", divisionName);
    query.bindValue(":location", location);
    query.bindValue(":yrJoined", yrJoined);

    if(!query.exec()){

        qDebug() << (query.lastError().text());
        STRING error = "TEAM NOT ADDED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }

}


void DatabaseManager::addNewStadium(const STRING &stadiumName,
                                    const int    &seatingCap)
{
    QSqlQuery query;

    query.prepare("INSERT into stadiums "
                        "(stadiumName, seatingCap) "
                  "VALUES "
                        "(:stadiumName, :seatingCap)");

    query.bindValue(":stadiumName",      stadiumName);
    query.bindValue(":seatingCap",       seatingCap);

    if(!query.exec()){

        qDebug() << (query.lastError().text());
        STRING error = "STADIUM NOT ADDED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::addNewSouvenir(const STRING &itemName,
                                     const double &itemPrice,
                                     const STRING &stadiumName)
{
    QSqlQuery query;

    query.prepare("INSERT into souvenirs "
                        "(itemName, itemPrice, stadiumName) "
                  "VALUES "
                        "(:itemName, :itemPrice, :stadiumName)");

    query.bindValue(":itemName",    itemName);
    query.bindValue(":itemPrice",   itemPrice);
    query.bindValue(":stadiumName", stadiumName);

    if(!query.exec()){

        qDebug() << (query.lastError().text());
        STRING error = "Souvenir NOT ADDED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }


}


void DatabaseManager::addNewDistance(const STRING &startStadium,
                                     const STRING &endStadium,
                                     const double &distance)
{
    QSqlQuery query;

    query.prepare("INSERT into distances "
                        "(startStadium, endStadium, distance) "
                  "VALUES "
                        "(:startStadium, :endStadium, :distance)");

    query.bindValue(":startStadium", startStadium);
    query.bindValue(":endStadium",   endStadium);
    query.bindValue(":distance",     distance);

    if(!query.exec()){

        qDebug() << (query.lastError().text());
        STRING error = "Distance NOT ADDED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::updateSouvenir(const STRING &itemName,
                                     const double &itemPrice,
                                     const STRING &stadiumName)
{
    QSqlQuery query;

    query.prepare("UPDATE souvenirs "
                  "SET    itemPrice = :itemPrice "
                  "WHERE  itemName  = :itemName AND stadiumName = :stadiumName;");

    query.bindValue(":itemName",    itemName);
    query.bindValue(":itemPrice",   itemPrice);
    query.bindValue(":stadiumName", stadiumName);

    if(!query.exec()){

        qDebug() << (query.lastError().text());
        STRING error = "Souvenir NOT UPDATED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }


}

void DatabaseManager::updateNameStadiumTable( const STRING orignalName ,const STRING newName)
{
    QSqlQuery query;
    query.prepare("UPDATE stadiums "
                  "SET    stadiumName = :newName "
                  "WHERE  stadiumName = :orignalName;");
    query.bindValue(":newName", newName);
    query.bindValue(":orignalName", orignalName);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium Name NOT UPDATED in stadiums table\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }

}

void DatabaseManager::updateNameSouvenirTable(const STRING orignalName,  const STRING newName)
{
     QSqlQuery query;
    query.prepare("UPDATE souvenirs "
               "SET    stadiumName = :newName "
               "WHERE  stadiumName = :orignalName;");
    query.bindValue(":newName", newName);
    query.bindValue(":orignalName", orignalName);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium Name NOT UPDATED in souvenirs table\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::updateNameTeamTable(const STRING orignalName, const STRING newName)
{
    QSqlQuery query;
    query.prepare("UPDATE teams "
                 "SET    stadiumName = :newName "
                 "WHERE  stadiumName = :orignalName;");
    query.bindValue(":newName", newName);
    query.bindValue(":orignalName", orignalName);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium Name NOT UPDATED in teams table\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::updateNameDistanceTable(const STRING orignalName, const STRING newName)
{
    QSqlQuery query;
    query.prepare("UPDATE distances "
                 "SET    startStadium = :newName "
                 "WHERE  startStadium = :orignalName;");
    query.bindValue(":newName", newName);
    query.bindValue(":orignalName", orignalName);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium Name NOT UPDATED in distances table\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::updateNameDistanceTable2(const STRING orignalName, const STRING newName)
{
    QSqlQuery query;
    query.prepare("UPDATE distances "
                 "SET    endStadium = :newName "
                 "WHERE  endStadium = :orignalName;");
    query.bindValue(":newName", newName);
    query.bindValue(":orignalName", orignalName);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium Name NOT UPDATED in distances table\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }
}

void DatabaseManager::updateStadiumName(const STRING orignalName,
                                        const STRING newName)
{
    qDebug() << ("Changing: " + orignalName);
    qDebug() << ("To:" + newName);

      updateNameStadiumTable(orignalName, newName);
      updateNameSouvenirTable(orignalName,  newName);
      updateNameTeamTable(orignalName,  newName);
      updateNameDistanceTable(orignalName, newName);
      updateNameDistanceTable2(orignalName, newName);
}
void DatabaseManager::updateStadium(const STRING &stadiumName,
                                    const int    &seatingCap)
{
    QSqlQuery query;

    query.prepare("UPDATE stadiums "
                  "SET    "
                          "seatingCap         = :seatingCap "
                  "WHERE   stadiumName = :stadiumName;");

    query.bindValue(":stadiumName",      stadiumName);
    query.bindValue(":seatingCap",       seatingCap);

    if(!query.exec()){
        qDebug() << (query.lastError().text());
        STRING error = "Stadium NOT UPDATED\n\nERROR: " +
                        query.lastError().text();
        throw error;
    }

}

/***************************************************************************//**
 * @brief DatabaseManager::deleteSouvenir
 * @param itemName
 * @param itemPrice
 * @param stadiumName
 *
 * Deletes souvenir from souvenirs table in database if there is an entry whos
 * itemName, itemPrice, and stadiumNAme all match the values passed in as
 * parameters. If they do not, an error will be thrown.
 ******************************************************************************/
void DatabaseManager::deleteSouvenir(const STRING &itemName,
                                     const double &itemPrice,
                                     const STRING &stadiumName)
{
    QSqlQuery query;

    query.prepare("DELETE from souvenirs "
                  "WHERE "
                        "itemName=:itemName   AND "
                        "itemPrice=:itemPrice AND "
                        "stadiumName=:stadiumName "
                  ";");

    query.bindValue(":itemName",    itemName );
    query.bindValue(":itemPrice",   itemPrice);
    query.bindValue(":stadiumName", stadiumName);

    if(!query.exec())
    {
        STRING error = query.lastError().text();
        throw error;
    }
}
/******************************************************************************
 *=============================================================================
 *                             GET MODEL QUERIES
 ******************************************************************************/

/***************************************************************************//**
 * @brief DatabaseManager::getTeamsModel
 * @return the model of the teams table.
 ******************************************************************************/
QSqlQueryModel *DatabaseManager::getTeamsModel()
{
     QSqlQueryModel *model;

     model = new QSqlQueryModel;

     model->setQuery("SELECT "
                          "teamName       as 'Team Name', "
                          "stadiumName    as 'Stadium Name', "
                          "coachName      as 'Coach', "
                          "conferenceName as 'Conference', "
                          "divisionName   as 'Division', "
                          "location       as 'Location', "
                          "yearJoined     as 'yrJoined' "
                     "FROM teams;");

     return model;
}

/***************************************************************************//**
 * @brief DatabaseManager::getTeamsModel
 * @return the model of the teams table.
 ******************************************************************************/
QSqlQueryModel *DatabaseManager::getStadiumsModel()
{
     QSqlQueryModel *model;

     model = new QSqlQueryModel;

     model->setQuery("SELECT "
                          "stadiumName        as 'Stadium Name', "
                          "seatingCap         as 'Capacity' "
                     "FROM stadiums;");

     return model;
}

/***************************************************************************//**
 * @brief DatabaseManager::getStadiumsAndTeamsModel
 * @return QSqlQueryModel *
 * Function returns a model containing all data in teams table and stadiums table
 * tables are inner joined by stadium name meaning that rows in the team table
 * will be connected to rows in the stadiums table where the stadiums column
 * match.
 ******************************************************************************/
QSqlQueryModel *DatabaseManager::getStadiumsAndTeamsModel()
{
    QSqlQueryModel *model;

    model = new QSqlQueryModel;

    model->setQuery("SELECT "
                         "teamName               as 'Team Name', "
                         "stadiums.stadiumName   as 'Stadium Name', "
                         "seatingCap             as 'Capacity', "
                         "conferenceName         as 'Conference', "
                         "divisionName           as 'Division', "
                         "location               as 'Location', "
                         "yearJoined             as 'Year Joined', "
                         "coachName              as 'Coach' "
                    "FROM stadiums "
                    "INNER JOIN teams "
                    "ON teams.stadiumName = stadiums.stadiumName;");
    qDebug() << (model->lastError().text());
    return model;
}

/***************************************************************************//**
 * @brief DatabaseManager::getSouvenirsModel
 * @return the model of the souvenirs table.
 ******************************************************************************/
QSqlQueryModel *DatabaseManager::getSouvenirsModel()
{
     QSqlQueryModel *model;

     model = new QSqlQueryModel;

     model->setQuery("SELECT "
                          "itemName      as 'Item', "
                          "itemPrice     as 'Price', "
                          "stadiumName   as 'Stadium Name' "
                     "FROM souvenirs;");

     return model;
}


QSqlQueryModel *DatabaseManager::getDistancesModel()
{
     QSqlQueryModel *model;

     model = new QSqlQueryModel;

     model->setQuery("SELECT "
                          "startStadium, "
                          "endStadium, "
                          "distance "
                     "FROM distances;");

     return model;
}

int DatabaseManager::getSeatingCapacitySum()
{
    QSqlQuery query;

    query.exec("SELECT SUM(seatingCap) FROM stadiums");
    query.next();

      int total = query.value(0).toInt();


    qDebug() << (total);
    return total;
}

/******************************************************************************
 *=============================================================================
 *                      LOGIN VERIFICATION QUERIES
 *
 * - Below functions are used to validate user login
 ******************************************************************************/

/***************************************************************************//**
 * @brief DatabaseManager::authenticateUserLogin
 * @param username
 * @param password
 * @return loginStatus(bool)
 *
 * returns true value if username and password match an entry in admin table
 ******************************************************************************/
bool DatabaseManager::authenticateUserLogin(const  STRING &username,
                                            const  STRING &password)
{
    bool loginStatus = false;

    QSqlQuery query;

    query.prepare("SELECT * "
                  "FROM   administrators "
                  "WHERE  userName = :username "
                  "AND    password = :password;");

    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();

    if(query.next())
        loginStatus = true;

    return loginStatus;
}
