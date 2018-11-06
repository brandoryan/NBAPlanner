#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    admin adminMenu;
    //fan fanMenu;
    QString fanUser = "fan";
    QString fanPass = "pass";
    QString adminUser = "admin";
    QString adminPass = "pass";
    bool admin = false;
    int loginAttempts = 3;
    ~Login();

private slots:
    void on_Login_PB_clicked();

private:
    Ui::Login *ui;
};

#endif // MAINWINDOW_H
