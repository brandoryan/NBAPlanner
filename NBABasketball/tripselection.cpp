#include "tripselection.h"
#include "ui_tripselection.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QtSql>

tripSelection::tripSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tripSelection)
{
    ui->setupUi(this);

    // Loading a refresh icon onto the refresh button
    ui->refreshButton->setIcon(QIcon(":/refresh.png"));
    ui->refreshButton->setIconSize(QSize(30, 20));

    QListWidgetItem *itm = new QListWidgetItem;
    QSqlQuery query;

    // Updates the list widget with all the arenas in the database
    QString queryCommand = "select name,icon from teams";
    if(query.exec(queryCommand)) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QListWidgetItem;
                itm->setText(query.value(0).toString());
                itm->setIcon(QIcon(query.value(1).toString()));
                ui->listWidget->addItem(itm);
            }
        }
    }
    else {
        qDebug() << "error";
    }
}

tripSelection::~tripSelection()
{
    delete ui;
}

void tripSelection::on_addButton_clicked()
{
    if(ui->listWidget->currentItem() != NULL) {
        QListWidgetItem *itm = ui->listWidget->currentItem();
        ui->listWidget_2->addItem(itm->clone());
        delete ui->listWidget->takeItem(ui->listWidget->row(itm));
    }
    //this->updateDistanceEstimation();
}

void tripSelection::on_removeButton_clicked()
{
    if(ui->listWidget_2->currentItem() != NULL) {
        QListWidgetItem *itm = ui->listWidget_2->currentItem();
        ui->listWidget->addItem(itm->clone());
        delete ui->listWidget_2->takeItem(ui->listWidget_2->row(itm));
    }
    //this->updateDistanceEstimation();
}

void tripSelection::on_backButton_clicked()
{
    emit BackButtonClicked();
    this->close();
}

void tripSelection::on_beginTripButton_clicked()
{
    mapMenu.open();
    this->close();
}

void tripSelection::on_refreshButton_clicked()
{
    QListWidgetItem *itm = new QListWidgetItem;
    QSqlQuery query;

    ui->listWidget->clear();
    ui->listWidget_2->clear();

    // Updates the list widget with all the arenas in the database
    if(query.exec("select name,icon from teams")) {
        while(query.next()) {
            if(query.value(0).toString() != NULL) {
                itm = new QListWidgetItem;
                itm->setText(query.value(0).toString());
                itm->setIcon(QIcon(query.value(1).toString()));
                ui->listWidget->addItem(itm);
            }
        }
    }
}
