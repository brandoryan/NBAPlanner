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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QLabel *capacityText;
    QTextEdit *capacityNumber;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *allInformation;
    QPushButton *coachesAndTeamsByTeamName;
    QPushButton *southeastDivisionEasternTeamsByTeamName;
    QPushButton *teamAndArenaNamesByAscendingYearJoined;
    QPushButton *easternTeamsByTeamName;
    QPushButton *arenasAndTeamsBySeatingCapacity;
    QPushButton *teamsByTeamName;
    QPushButton *teamsByArenaName;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(1022, 873);
        label = new QLabel(admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 10, 81, 16));
        label_2 = new QLabel(admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 480, 101, 16));
        label_3 = new QLabel(admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 530, 171, 51));
        label_3->setFrameShape(QFrame::Box);
        label_3->setWordWrap(true);
        label_4 = new QLabel(admin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(750, 530, 161, 91));
        label_4->setFrameShape(QFrame::Box);
        label_4->setWordWrap(true);
        tableWidget = new QTableWidget(admin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 990, 431));
        label_5 = new QLabel(admin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 560, 91, 16));
        capacityText = new QLabel(admin);
        capacityText->setObjectName(QStringLiteral("capacityText"));
        capacityText->setGeometry(QRect(860, 470, 141, 20));
        capacityNumber = new QTextEdit(admin);
        capacityNumber->setObjectName(QStringLiteral("capacityNumber"));
        capacityNumber->setGeometry(QRect(873, 490, 111, 31));
        QFont font;
        font.setPointSize(15);
        capacityNumber->setFont(font);
        verticalLayoutWidget = new QWidget(admin);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(280, 520, 380, 275));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        allInformation = new QPushButton(verticalLayoutWidget);
        allInformation->setObjectName(QStringLiteral("allInformation"));
        allInformation->setAutoDefault(false);

        verticalLayout->addWidget(allInformation);

        coachesAndTeamsByTeamName = new QPushButton(verticalLayoutWidget);
        coachesAndTeamsByTeamName->setObjectName(QStringLiteral("coachesAndTeamsByTeamName"));
        coachesAndTeamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(coachesAndTeamsByTeamName);

        southeastDivisionEasternTeamsByTeamName = new QPushButton(verticalLayoutWidget);
        southeastDivisionEasternTeamsByTeamName->setObjectName(QStringLiteral("southeastDivisionEasternTeamsByTeamName"));
        southeastDivisionEasternTeamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(southeastDivisionEasternTeamsByTeamName);

        teamAndArenaNamesByAscendingYearJoined = new QPushButton(verticalLayoutWidget);
        teamAndArenaNamesByAscendingYearJoined->setObjectName(QStringLiteral("teamAndArenaNamesByAscendingYearJoined"));
        teamAndArenaNamesByAscendingYearJoined->setAutoDefault(false);

        verticalLayout->addWidget(teamAndArenaNamesByAscendingYearJoined);

        easternTeamsByTeamName = new QPushButton(verticalLayoutWidget);
        easternTeamsByTeamName->setObjectName(QStringLiteral("easternTeamsByTeamName"));
        easternTeamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(easternTeamsByTeamName);

        arenasAndTeamsBySeatingCapacity = new QPushButton(verticalLayoutWidget);
        arenasAndTeamsBySeatingCapacity->setObjectName(QStringLiteral("arenasAndTeamsBySeatingCapacity"));
        arenasAndTeamsBySeatingCapacity->setAutoDefault(false);

        verticalLayout->addWidget(arenasAndTeamsBySeatingCapacity);

        teamsByTeamName = new QPushButton(verticalLayoutWidget);
        teamsByTeamName->setObjectName(QStringLiteral("teamsByTeamName"));
        teamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(teamsByTeamName);

        teamsByArenaName = new QPushButton(verticalLayoutWidget);
        teamsByArenaName->setObjectName(QStringLiteral("teamsByArenaName"));
        teamsByArenaName->setAutoDefault(false);

        verticalLayout->addWidget(teamsByArenaName);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Administrator Menu", nullptr));
        label->setText(QApplication::translate("admin", "Data Viewer", nullptr));
        label_2->setText(QApplication::translate("admin", "Display Options", nullptr));
        label_3->setText(QApplication::translate("admin", "Double Click a Team to see all information related to it, including souvenirs", nullptr));
        label_4->setText(QApplication::translate("admin", "As well as total capacity of all NBA teams, if two teams use the same arena, count the capacity of the arena only once", nullptr));
        label_5->setText(QApplication::translate("admin", "<-------------", nullptr));
        capacityText->setText(QApplication::translate("admin", "Total Seating Capacity", nullptr));
        allInformation->setText(QApplication::translate("admin", "Display All Information", nullptr));
        coachesAndTeamsByTeamName->setText(QApplication::translate("admin", "Teams and Coaches by Team Name", nullptr));
        southeastDivisionEasternTeamsByTeamName->setText(QApplication::translate("admin", "Southeast Division Teams of Eastern Conference by Team Name", nullptr));
        teamAndArenaNamesByAscendingYearJoined->setText(QApplication::translate("admin", "Teams, Arenas, and Year Joined by Year in Ascending Order", nullptr));
        easternTeamsByTeamName->setText(QApplication::translate("admin", "Eastern Conference Teams by Team Name", nullptr));
        arenasAndTeamsBySeatingCapacity->setText(QApplication::translate("admin", "Teams and Arenas by Seating Capacity", nullptr));
        teamsByTeamName->setText(QApplication::translate("admin", "Teams By Team Name", nullptr));
        teamsByArenaName->setText(QApplication::translate("admin", "Teams By Arena Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
