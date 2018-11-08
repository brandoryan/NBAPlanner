/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *label;
    QPushButton *teamsByTeamName;
    QPushButton *teamsByArenaName;
    QPushButton *easternTeamsByTeamName;
    QPushButton *southeastDivisionEasternTeamsByTeamName;
    QPushButton *coachesAndTeamsByTeamName;
    QPushButton *arenasAndTeamsBySeatingCapacity;
    QPushButton *teamAndArenaNamesByAscendingYearJoined;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QPushButton *allInformation;
    QLabel *capacityText;
    QTextEdit *capacityNumber;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(1020, 730);
        label = new QLabel(admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 10, 81, 16));
        teamsByTeamName = new QPushButton(admin);
        teamsByTeamName->setObjectName(QStringLiteral("teamsByTeamName"));
        teamsByTeamName->setGeometry(QRect(360, 530, 311, 32));
        teamsByTeamName->setAutoDefault(false);
        teamsByArenaName = new QPushButton(admin);
        teamsByArenaName->setObjectName(QStringLiteral("teamsByArenaName"));
        teamsByArenaName->setGeometry(QRect(360, 590, 311, 32));
        teamsByArenaName->setAutoDefault(false);
        easternTeamsByTeamName = new QPushButton(admin);
        easternTeamsByTeamName->setObjectName(QStringLiteral("easternTeamsByTeamName"));
        easternTeamsByTeamName->setGeometry(QRect(360, 610, 311, 31));
        easternTeamsByTeamName->setAutoDefault(false);
        southeastDivisionEasternTeamsByTeamName = new QPushButton(admin);
        southeastDivisionEasternTeamsByTeamName->setObjectName(QStringLiteral("southeastDivisionEasternTeamsByTeamName"));
        southeastDivisionEasternTeamsByTeamName->setGeometry(QRect(250, 650, 521, 32));
        southeastDivisionEasternTeamsByTeamName->setAutoDefault(false);
        coachesAndTeamsByTeamName = new QPushButton(admin);
        coachesAndTeamsByTeamName->setObjectName(QStringLiteral("coachesAndTeamsByTeamName"));
        coachesAndTeamsByTeamName->setGeometry(QRect(360, 550, 311, 32));
        coachesAndTeamsByTeamName->setAutoDefault(false);
        arenasAndTeamsBySeatingCapacity = new QPushButton(admin);
        arenasAndTeamsBySeatingCapacity->setObjectName(QStringLiteral("arenasAndTeamsBySeatingCapacity"));
        arenasAndTeamsBySeatingCapacity->setGeometry(QRect(360, 570, 311, 32));
        arenasAndTeamsBySeatingCapacity->setAutoDefault(false);
        teamAndArenaNamesByAscendingYearJoined = new QPushButton(admin);
        teamAndArenaNamesByAscendingYearJoined->setObjectName(QStringLiteral("teamAndArenaNamesByAscendingYearJoined"));
        teamAndArenaNamesByAscendingYearJoined->setGeometry(QRect(250, 630, 521, 32));
        teamAndArenaNamesByAscendingYearJoined->setAutoDefault(false);
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
        label_4->setGeometry(QRect(760, 530, 161, 91));
        label_4->setFrameShape(QFrame::Box);
        label_4->setWordWrap(true);
        tableWidget = new QTableWidget(admin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 990, 431));
        label_5 = new QLabel(admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 575, 91, 16));
        allInformation = new QPushButton(admin);
        allInformation->setObjectName(QStringLiteral("allInformation"));
        allInformation->setGeometry(QRect(360, 510, 311, 32));
        allInformation->setAutoDefault(false);
        capacityText = new QLabel(admin);
        capacityText->setObjectName(QStringLiteral("capacityText"));
        capacityText->setGeometry(QRect(860, 470, 141, 20));
        capacityNumber = new QTextEdit(admin);
        capacityNumber->setObjectName(QStringLiteral("capacityNumber"));
        capacityNumber->setGeometry(QRect(873, 490, 111, 31));
        QFont font;
        font.setPointSize(15);
        capacityNumber->setFont(font);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Administrator Menu", nullptr));
        label->setText(QApplication::translate("admin", "Data Viewer", nullptr));
        teamsByTeamName->setText(QApplication::translate("admin", "Teams By Team Name", nullptr));
        teamsByArenaName->setText(QApplication::translate("admin", "Teams By Arena Name", nullptr));
        easternTeamsByTeamName->setText(QApplication::translate("admin", "Eastern Conference Teams by Team Name", nullptr));
        southeastDivisionEasternTeamsByTeamName->setText(QApplication::translate("admin", "Southeast Division Teams of Eastern Conference by Team Name", nullptr));
        coachesAndTeamsByTeamName->setText(QApplication::translate("admin", "Teams and Coaches by Team Name", nullptr));
        arenasAndTeamsBySeatingCapacity->setText(QApplication::translate("admin", "Teams and Arenas by Seating Capacity", nullptr));
        teamAndArenaNamesByAscendingYearJoined->setText(QApplication::translate("admin", "Teams, Arenas, and Year Joined by Year in Ascending Order", nullptr));
        label_2->setText(QApplication::translate("admin", "Display Options", nullptr));
        label_3->setText(QApplication::translate("admin", "Double Click a Team to see all information related to it, including souvenirs", nullptr));
        label_4->setText(QApplication::translate("admin", "As well as total capacity of all NBA teams, if two teams use the same arena, count the capacity of the arena only once", nullptr));
        label_5->setText(QApplication::translate("admin", "<-------------", nullptr));
        allInformation->setText(QApplication::translate("admin", "Display All Information", nullptr));
        capacityText->setText(QApplication::translate("admin", "Total Seating Capacity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
