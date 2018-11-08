#include "login.h"
#include <QApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    // Gets relative path to SQL Database
    QSqlDatabase db = QSqlDatabase::addDatabase(("QSQLITE"));
    QDir path;
    db.setDatabaseName(path.absoluteFilePath("nba.db"));

    // Checking if database successfully opened
    if(db.open()) {
        qDebug() << "Opened";
    }
    else {
        qDebug() << "Error";
    }

    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}
