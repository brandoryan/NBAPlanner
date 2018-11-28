#include "admin.h"
#include "ui_admin.h"
#include <QtSql>
admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "   Conference     " << "   Division   " << "     Team Name        " << "       Location      " << "        Arena Name        " << "    Stadium Capacity    " << "  Joined League   " << "Coach");
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->capacityNumber->setReadOnly(true);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;

    // Accesses the data table based on the name of the school
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }


    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select conference,division,name,location,arena,capacity,joined,coach from teams";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(1).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                 ui->comboBox->addItem(query.value(2).toString());
                itm->setText(query.value(2).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(3).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(4).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(5).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(6).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(7).toString());
                ui->tableWidget->setItem(x++,y, itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }

}

admin::~admin()
{
    delete ui;
}

void admin::on_teamsByTeamName_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Team Name");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/2));

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name from teams order by name asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_coachesAndTeamsByTeamName_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Team Name" << "Coach");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/2)-15);
    ui->tableWidget->setColumnWidth(1,(ui->tableWidget->width()/2)-15);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name,coach from teams order by name asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(1).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_arenasAndTeamsBySeatingCapacity_clicked()
{

    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->clear();
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Team Name" << "Arena Name");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/2)-15);
    ui->tableWidget->setColumnWidth(1,(ui->tableWidget->width()/2)-15);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int capacity = 0, rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name,arena,capacity from teams order by capacity asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(1).toString());
                ui->tableWidget->setItem(x++,y,itm);
                capacity+=query.value(2).toInt();
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }

    ui->capacityText->show();
    ui->capacityNumber->show();
    ui->capacityNumber->setText(QString::number(capacity));
}

void admin::on_teamsByArenaName_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Team Name");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/2)-10);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name from teams order by arena asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_easternTeamsByTeamName_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Eastern Teams");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/2)-10);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams where conference = \"Eastern\"";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name,conference from teams order by name asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL && query.value(1).toString() == "Eastern") {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_teamAndArenaNamesByAscendingYearJoined_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Team Name" << "Arena" << "Year Joined");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width()/3)-10);
    ui->tableWidget->setColumnWidth(1,(ui->tableWidget->width()/3)-10);
    ui->tableWidget->setColumnWidth(2,(ui->tableWidget->width()/3)-10);


    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }
    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select name,arena,joined from teams order by joined asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(1).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(2).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_southeastDivisionEasternTeamsByTeamName_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Southeast Division Eastern Teams");
    ui->tableWidget->setColumnWidth(0,(ui->tableWidget->width())-20);


    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;
    // Populates the table
    QString queryCommand = "select name,conference,division from teams order by name asc";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL && query.value(1).toString() == "Eastern" && query.value(2).toString() == "Southeast") {
                itm = new QTableWidgetItem;
                itm->setTextAlignment(Qt::AlignCenter);
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x++,y,itm);
                y=0;
                rows++;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
    ui->tableWidget->setRowCount(rows);
}

void admin::on_allInformation_clicked()
{
    ui->capacityText->hide();
    ui->capacityNumber->hide();
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "   Conference     " << "   Division   " << "     Team Name        " << "       Location      " << "        Arena Name        " << "    Stadium Capacity    " << "  Joined League   " << "Coach");
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    QSqlQuery query;
    QTableWidgetItem *itm;
    int rows = 0, x = 0, y = 0;

    // Gets the number of rows for the table
    QString queryCommand = "select COUNT(id) FROM teams";
    query.exec(queryCommand);
    if(query.next()) {
        rows = query.value(0).toInt();
    }

    ui->tableWidget->setRowCount(rows);

    // Populates the table
    queryCommand = "select conference,division,name,location,arena,capacity,joined,coach from teams";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setText(query.value(0).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(1).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(2).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(3).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(4).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(5).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(6).toString());
                ui->tableWidget->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(7).toString());
                ui->tableWidget->setItem(x++,y, itm);
                y=0;
            }
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void admin::on_logoutButton_clicked()
{
    // Emits the signal to login widget to transition back to login window
    emit LogoutButtonClicked();
    this->close();
}

void admin::on_souvButton_clicked()
{
    QDialog *window = new QDialog;
    QString teamName = ui->comboBox->currentText();
    QString queryCommand = "select id from teams where name = '"+teamName+"'";
    QSqlQuery query;
    QString id;
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                id = query.value(0).toString();
            }
        }
    }

    int y = 0, counter = 0, x = 0;
    QTableWidget *souvenirTable = new QTableWidget;
    QTableWidgetItem *itm = new QTableWidgetItem;

    souvenirTable->setRowCount(4);
    souvenirTable->setColumnCount(2);
    souvenirTable->setHorizontalHeaderLabels(QStringList() << "   Souvenir     " << "   Price   ");

    queryCommand = "select souvenir, price from souvenirs where id = '"+id+"'";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QTableWidgetItem;
                itm->setText(query.value(0).toString());
                souvenirTable->setItem(x,y++,itm);
                itm = new QTableWidgetItem;
                itm->setText(query.value(1).toString());
                souvenirTable->setItem(x++,y,itm);
                y=0;
                counter++;
            }
        }
    }

    souvenirTable->setWindowFlags(Qt::Window);
    souvenirTable->resize(500,500);
    souvenirTable->setAttribute(Qt::WA_DeleteOnClose);
    souvenirTable->show();
}
