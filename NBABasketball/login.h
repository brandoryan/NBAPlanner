#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"
#include "fan.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    admin adminMenu;
    fan fanMenu;
    QString fanUser = "fan";
    QString fanPass = "pass";
    QString adminUser = "admin";
    QString adminPass = "pass";
    bool admin = false;
    int loginAttempts = 3;

private slots:
    void on_Login_PB_clicked();
    void BackToLogin();

private:
    Ui::Login *ui;
};

#endif // MAINWINDOW_H
