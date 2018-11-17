#include "tripselection.h"
#include "ui_tripselection.h"

tripSelection::tripSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tripSelection)
{
    ui->setupUi(this);

    // Loading a refresh icon onto the refresh button
    ui->refreshButton->setIcon(QIcon(":/refresh.png"));
    ui->refreshButton->setIconSize(QSize(30, 20));
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
    this->close();
    emit BackButtonClicked();
}

void tripSelection::on_beginTripButton_clicked()
{
    mapMenu.open();
    this->close();
}
