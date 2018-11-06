/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(736, 567);
        centralWidget = new QWidget(MainWindow);
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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 736, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Welcome to the NBA Arena Planner", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "Administrator", nullptr));
        radioButton_1->setText(QApplication::translate("MainWindow", "NBA Fan", nullptr));
        Login_PB->setText(QApplication::translate("MainWindow", "Login", nullptr));
        UserHeader->setText(QApplication::translate("MainWindow", "Username", nullptr));
        PasswordHeader->setText(QApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
