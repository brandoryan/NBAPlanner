#include "login.h"
#include <QApplication>
#include <QtSql>
#include <QStandardPaths>

#define DB_SUBFOLDER "Project2"
#define DB_FILENAME "nba.db"

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase(("QSQLITE"));
    //db.setDatabaseName(QString("/Users/brandonryan/Desktop/GitHub/Project2/NBABasketball/nba.db"));

    QDir databaseDir(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));


    qDebug() << "Looking here for the database: " << databaseDir.absoluteFilePath(DB_FILENAME);


    if(QFile::exists(databaseDir.absoluteFilePath(DB_FILENAME)))
    {
        db.setDatabaseName(databaseDir.absoluteFilePath(DB_FILENAME));
        db.setConnectOptions(databaseDir.absoluteFilePath(DB_FILENAME));

        if(!db.open())
        {
            qDebug() << "Error: Connection failed";
        }
        else
        {
            qDebug() << "Datbase connection successful";
        }
    }
    else{
        qDebug() << "Database file not found";
    }

    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}

