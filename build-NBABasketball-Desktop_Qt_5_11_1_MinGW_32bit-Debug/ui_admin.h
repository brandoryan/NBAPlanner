/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_5;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(1020, 730);
        label = new QLabel(admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 10, 81, 16));
        pushButton = new QPushButton(admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 500, 311, 32));
        pushButton->setAutoDefault(false);
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 560, 311, 32));
        pushButton_2->setAutoDefault(false);
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 580, 311, 31));
        pushButton_3->setAutoDefault(false);
        pushButton_4 = new QPushButton(admin);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 620, 521, 32));
        pushButton_4->setAutoDefault(false);
        pushButton_5 = new QPushButton(admin);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 520, 311, 32));
        pushButton_5->setAutoDefault(false);
        pushButton_6 = new QPushButton(admin);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 540, 311, 32));
        pushButton_6->setAutoDefault(false);
        pushButton_7 = new QPushButton(admin);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 600, 521, 32));
        pushButton_7->setAutoDefault(false);
        label_2 = new QLabel(admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 480, 101, 16));
        label_3 = new QLabel(admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 500, 171, 51));
        label_3->setFrameShape(QFrame::Box);
        label_3->setWordWrap(true);
        label_4 = new QLabel(admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(760, 500, 161, 91));
        label_4->setFrameShape(QFrame::Box);
        label_4->setWordWrap(true);
        tableWidget = new QTableWidget(admin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 991, 431));
        label_5 = new QLabel(admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 545, 91, 16));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Administrator Menu", nullptr));
        label->setText(QApplication::translate("admin", "Data Viewer", nullptr));
        pushButton->setText(QApplication::translate("admin", "All Teams By Team Name", nullptr));
        pushButton_2->setText(QApplication::translate("admin", "All Teams By Arena Name", nullptr));
        pushButton_3->setText(QApplication::translate("admin", "Eastern Conference Teams by Team Name", nullptr));
        pushButton_4->setText(QApplication::translate("admin", "Southeast Division Teams of Eastern Conference by Team Name", nullptr));
        pushButton_5->setText(QApplication::translate("admin", "Coaches and Team Names by Team name", nullptr));
        pushButton_6->setText(QApplication::translate("admin", "NBA Arenas and Teams by Seating Capacity", nullptr));
        pushButton_7->setText(QApplication::translate("admin", "NBA Teams, Arena Names, and Year Joined Sorted by Year in ascending order", nullptr));
        label_2->setText(QApplication::translate("admin", "Display Options", nullptr));
        label_3->setText(QApplication::translate("admin", "Double Click a Team to see all information related to it, including souvenirs", nullptr));
        label_4->setText(QApplication::translate("admin", "As well as total capacity of all NBA teams, if two teams use the same arena, count the capacity of the arena only once", nullptr));
        label_5->setText(QApplication::translate("admin", "<-------------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
