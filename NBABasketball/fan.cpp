#include "fan.h"
#include "ui_fan.h"


fan::fan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fan)
{
    ui->setupUi(this);
    connect(&tripSelectionMenu, SIGNAL(BackButtonClicked()), this, SLOT(on_BackButton_clicked()));
}

fan::~fan()
{
    delete ui;
}

void fan::on_createTripButton_clicked()
{
    this->close();
    tripSelectionMenu.open();
}

void fan::on_logoutButton_clicked()
{
    // Emits the signal to login widget to transition back to login window
    emit LogoutButtonClicked();
    this->close();
}

void fan::on_BackButton_clicked()
{
    this->open();
}
