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
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

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
