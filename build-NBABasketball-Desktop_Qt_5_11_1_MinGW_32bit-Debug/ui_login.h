/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QPushButton *Login_PB;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *UserHeader;
    QLineEdit *UsernameInput;
    QLabel *PasswordHeader;
    QLineEdit *PasswordInput;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(736, 567);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 20, 241, 71));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(360, 300, 111, 21));
        radioButton_1 = new QRadioButton(centralWidget);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(270, 300, 81, 20));
        Login_PB = new QPushButton(centralWidget);
        Login_PB->setObjectName(QStringLiteral("Login_PB"));
        Login_PB->setGeometry(QRect(310, 340, 114, 32));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 160, 161, 121));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        UserHeader = new QLabel(verticalLayoutWidget);
        UserHeader->setObjectName(QStringLiteral("UserHeader"));
        UserHeader->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(UserHeader);

        UsernameInput = new QLineEdit(verticalLayoutWidget);
        UsernameInput->setObjectName(QStringLiteral("UsernameInput"));

        verticalLayout_2->addWidget(UsernameInput);

        PasswordHeader = new QLabel(verticalLayoutWidget);
        PasswordHeader->setObjectName(QStringLiteral("PasswordHeader"));
        PasswordHeader->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(PasswordHeader);

        PasswordInput = new QLineEdit(verticalLayoutWidget);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));

        verticalLayout_2->addWidget(PasswordInput);

        Login->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "NBA Arena Planner", nullptr));
        label_2->setText(QApplication::translate("Login", "Welcome to the NBA Arena Planner", nullptr));
        radioButton_2->setText(QApplication::translate("Login", "Administrator", nullptr));
        radioButton_1->setText(QApplication::translate("Login", "NBA Fan", nullptr));
        Login_PB->setText(QApplication::translate("Login", "Login", nullptr));
        UserHeader->setText(QApplication::translate("Login", "Username", nullptr));
        PasswordHeader->setText(QApplication::translate("Login", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
