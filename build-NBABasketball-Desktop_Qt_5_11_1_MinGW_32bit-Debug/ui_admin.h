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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
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
    QTableWidget *tableWidget;
    QLabel *capacityText;
    QTextEdit *capacityNumber;
    QPushButton *logoutButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *allInformation;
    QPushButton *coachesAndTeamsByTeamName;
    QPushButton *southeastDivisionEasternTeamsByTeamName;
    QPushButton *teamAndArenaNamesByAscendingYearJoined;
    QVBoxLayout *verticalLayout;
    QPushButton *easternTeamsByTeamName;
    QPushButton *arenasAndTeamsBySeatingCapacity;
    QPushButton *teamsByTeamName;
    QPushButton *teamsByArenaName;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton;

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
        label_2->setGeometry(QRect(450, 480, 101, 16));
        tableWidget = new QTableWidget(admin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 990, 431));
        capacityText = new QLabel(admin);
        capacityText->setObjectName(QStringLiteral("capacityText"));
        capacityText->setGeometry(QRect(860, 470, 141, 20));
        capacityNumber = new QTextEdit(admin);
        capacityNumber->setObjectName(QStringLiteral("capacityNumber"));
        capacityNumber->setGeometry(QRect(873, 490, 111, 31));
        QFont font;
        font.setPointSize(15);
        capacityNumber->setFont(font);
        capacityNumber->setReadOnly(true);
        logoutButton = new QPushButton(admin);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(10, 660, 141, 51));
        logoutButton->setAutoDefault(false);
        horizontalLayoutWidget = new QWidget(admin);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 510, 751, 136));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        allInformation = new QPushButton(horizontalLayoutWidget);
        allInformation->setObjectName(QStringLiteral("allInformation"));
        allInformation->setAutoDefault(false);

        verticalLayout_2->addWidget(allInformation);

        coachesAndTeamsByTeamName = new QPushButton(horizontalLayoutWidget);
        coachesAndTeamsByTeamName->setObjectName(QStringLiteral("coachesAndTeamsByTeamName"));
        coachesAndTeamsByTeamName->setAutoDefault(false);

        verticalLayout_2->addWidget(coachesAndTeamsByTeamName);

        southeastDivisionEasternTeamsByTeamName = new QPushButton(horizontalLayoutWidget);
        southeastDivisionEasternTeamsByTeamName->setObjectName(QStringLiteral("southeastDivisionEasternTeamsByTeamName"));
        southeastDivisionEasternTeamsByTeamName->setAutoDefault(false);

        verticalLayout_2->addWidget(southeastDivisionEasternTeamsByTeamName);

        teamAndArenaNamesByAscendingYearJoined = new QPushButton(horizontalLayoutWidget);
        teamAndArenaNamesByAscendingYearJoined->setObjectName(QStringLiteral("teamAndArenaNamesByAscendingYearJoined"));
        teamAndArenaNamesByAscendingYearJoined->setAutoDefault(false);

        verticalLayout_2->addWidget(teamAndArenaNamesByAscendingYearJoined);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        easternTeamsByTeamName = new QPushButton(horizontalLayoutWidget);
        easternTeamsByTeamName->setObjectName(QStringLiteral("easternTeamsByTeamName"));
        easternTeamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(easternTeamsByTeamName);

        arenasAndTeamsBySeatingCapacity = new QPushButton(horizontalLayoutWidget);
        arenasAndTeamsBySeatingCapacity->setObjectName(QStringLiteral("arenasAndTeamsBySeatingCapacity"));
        arenasAndTeamsBySeatingCapacity->setAutoDefault(false);

        verticalLayout->addWidget(arenasAndTeamsBySeatingCapacity);

        teamsByTeamName = new QPushButton(horizontalLayoutWidget);
        teamsByTeamName->setObjectName(QStringLiteral("teamsByTeamName"));
        teamsByTeamName->setAutoDefault(false);

        verticalLayout->addWidget(teamsByTeamName);

        teamsByArenaName = new QPushButton(horizontalLayoutWidget);
        teamsByArenaName->setObjectName(QStringLiteral("teamsByArenaName"));
        teamsByArenaName->setAutoDefault(false);

        verticalLayout->addWidget(teamsByArenaName);


        horizontalLayout->addLayout(verticalLayout);

        comboBox = new QComboBox(admin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(870, 560, 121, 41));
        label_3 = new QLabel(admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(870, 540, 121, 21));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(893, 595, 71, 31));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Administrator Menu", nullptr));
        label->setText(QApplication::translate("admin", "Data Viewer", nullptr));
        label_2->setText(QApplication::translate("admin", "Display Options", nullptr));
        capacityText->setText(QApplication::translate("admin", "Total Seating Capacity", nullptr));
        logoutButton->setText(QApplication::translate("admin", "Logout", nullptr));
        allInformation->setText(QApplication::translate("admin", "Display All Information", nullptr));
        coachesAndTeamsByTeamName->setText(QApplication::translate("admin", "Teams and Coaches by Team Name", nullptr));
        southeastDivisionEasternTeamsByTeamName->setText(QApplication::translate("admin", "Southeast Division Teams of Eastern Conference by Team Name", nullptr));
        teamAndArenaNamesByAscendingYearJoined->setText(QApplication::translate("admin", "Teams, Arenas, and Year Joined by Year in Ascending Order", nullptr));
        easternTeamsByTeamName->setText(QApplication::translate("admin", "Eastern Conference Teams by Team Name", nullptr));
        arenasAndTeamsBySeatingCapacity->setText(QApplication::translate("admin", "Teams and Arenas by Seating Capacity", nullptr));
        teamsByTeamName->setText(QApplication::translate("admin", "Teams By Team Name", nullptr));
        teamsByArenaName->setText(QApplication::translate("admin", "Teams By Arena Name", nullptr));
        label_3->setText(QApplication::translate("admin", "Souvenir Info", nullptr));
        pushButton->setText(QApplication::translate("admin", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
