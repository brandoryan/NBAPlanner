#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

typedef QString         STRING;
typedef QVector<STRING> strVECTOR;
typedef QVector<int>    intVECTOR;
typedef QVector<double> doubleVECTOR;

enum teamsColumns
{
    TEAMS_TEAM_NAME,
    TEAMS_STADIUM_NAME,
    TEAMS_COACH_NAME,
    TEAMS_CONFERENCE,
    TEAMS_DIVISION,
    TEAMS_LOCATION,
    TEAMS_YEAR_JOINED,
    TEAMS_SEAT_CAP
};

enum stadiumsColumns
{
    STADIUMS_STADIUM_NAME,
    STADIUMS_SEATING_CAP
};

enum stadiumsTeamsColumns
{
    ST_TEAM_NAME,
    ST_STADIUM_NAME,
    ST_SEATING_CAP,
    ST_CONFERENCE,
    ST_DIVISION,
    ST_LOCATION,
    ST_YEAR_JOINED,
    ST_COACH_NAME
};

enum souvenirsColumns
{
    SOUVENIRS_ITEM_NAME,
    SOUVENIRS_ITEM_PRICE,
    SOUVENIRS_STADIUM_NAME
};

class DatabaseManager
{
public:
    static DatabaseManager* getInstance();

    // Used for Login Validation
    bool authenticateUserLogin(const STRING &username, const STRING &password);

    // Add Methods
    void addNewTeam(const STRING &teamName, const STRING &stadiumName, const STRING &coachName, const STRING &conferenceName, const STRING &divisionName, const STRING &location, const int &yrJoined, const int &seatingCap);
    void addNewStadium(const STRING &stadiumName, const int &seatingCap);
    void addNewSouvenir(const STRING &itemName, const double &itemPrice, const STRING &stadiumName);
    void addNewDistance(const STRING &startStadium, const STRING &endStadium, const double &distance);

    // Update Methods
    void updateSouvenir(const STRING &itemName, const double &itemPrice, const STRING &stadiumName);
    void updateStadium(const STRING &stadiumName, const int &seatingCap);
    void updateTeam(const STRING &stadiumName, const STRING &location, const int &seatCap);

    // Delete Methods
    void deleteSouvenir(const STRING &itemName, const double &itemPrice, const STRING &stadiumName);

    // Getters
    QSqlQueryModel *getTeamsModel();
    QSqlQueryModel *getStadiumsModel();
    QSqlQueryModel *getSouvenirsModel();
    QSqlQueryModel *getStadiumsAndTeamsModel();
    QSqlQueryModel *getDistancesModel();

    void readTeamAndStadiumsFromFile(STRING fileName);
    void readDistancesFromFile(STRING fileName);

    int getSeatingCapacitySum();
    void updateStadiumName(const STRING orignalName, const STRING newName);
    QSqlQuery updateStadiumNameStadiumTable(const STRING orignalName, const STRING newName);

private:
    DatabaseManager();
    ~DatabaseManager();

    // Singleton instance of database connection
    static DatabaseManager* _instance;

    // Database connection
    QSqlDatabase dbConn;
    bool connectDB();
    void closeDB();

    // Functions used to initialize default SQLite tables / data
    void createDatabase();
    void initializeAdminTable(QSqlQuery query);
    void initializeTeamTable(QSqlQuery query);
    void initializeStadiumsTable(QSqlQuery query);
    void initializeSouvenirsTable(QSqlQuery query);
    void initializeDistancesTable(QSqlQuery query);
    void updateNameStadiumTable(const STRING orignalName, const STRING newName);
    void updateNameSouvenirTable(const STRING orignalName, const STRING newName);
    void updateNameTeamTable(const STRING orignalName, const STRING newName);
    void updateNameDistanceTable(const STRING orignalName, const STRING newName);
    void updateNameDistanceTable2(const STRING orignalName, const STRING newName);
};

#endif // DATABASEMANAGER_H
