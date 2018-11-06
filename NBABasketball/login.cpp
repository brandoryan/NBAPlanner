#include "login.h"
#include "ui_login.h"
#include <QErrorMessage>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    // Fan user login is selected by default
    ui->radioButton_1->setChecked(true);

    // Ensures that the password is encrypted (i.e. "***")
    ui->PasswordInput->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}

void Login::on_Login_PB_clicked()
{
    // Username/Password check
    if(ui->UsernameInput->text() == fanUser && ui->PasswordInput->text() == fanPass && ui->radioButton_1->isChecked() == true) {
       //user.setAdmin(false);
       //fanMenu.open();
    }
    // Administrator Username/Password check
    else if(ui->UsernameInput->text() == adminUser && ui->PasswordInput->text() == adminPass && ui->radioButton_2->isChecked() == true)
    {
        this->close();
        adminMenu.open();
        //user.setAdmin(true);
    }
    // Credentials did not match student or administrator
    else {
        if(loginAttempts == 0) {
           this->close();
        }
        else {
            QErrorMessage error;
            error.showMessage("Invalid Username or Password.\nAttempts left: " + QString::number(loginAttempts--));
            error.exec();
        }
    }
}
