#include "login.h"
#include <QApplication>
#include <QtSql>
#include <QStandardPaths>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase(("QSQLITE"));
    db.setDatabaseName(QString("/Users/brandonryan/Desktop/GitHub/Project2/NBABasketball/nba.db"));

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
