/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_NBALogoHome;
    QLabel *label_NavPageTitleHeader;
    QLabel *label_HeaderNavBarBackground;
    QPushButton *pushButton_adminLogout;
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QLabel *label_seatingCap;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *pushButton_addSouvenir;
    QLabel *label_10;
    QLabel *label_coach;
    QTableView *tableView_Teams;
    QPushButton *pushButton_AddDataFromFile;
    QLabel *label_12;
    QTableView *tableView_Souveniers;
    QLabel *label_stadiumName;
    QPushButton *pushButton_updateSouvenir;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_division;
    QLabel *label_conference;
    QLabel *label;
    QLabel *label_yearJoined;
    QLabel *label_8;
    QPushButton *pushButton_updateStadiumInfo;
    QLabel *label_location;
    QPushButton *pushButton_deleteSouvenir;
    QLabel *label_9;
    QLabel *label_7;
    QWidget *AddUpdateSouvenir;
    QLabel *label_addUpdateHEader;
    QLineEdit *lineEdit_souvenirName;
    QPushButton *pushButton_submitAddUpdate;
    QPushButton *pushButton_cancelAddUpdate;
    QDoubleSpinBox *doubleSpinBox_souvenirPrice;
    QLabel *label_2;
    QLabel *label_14;
    QWidget *UpdateStadium;
    QSpinBox *spinBox_yearJoined_2;
    QSpinBox *spinBox_SeatinCap;
    QLabel *label_addUpdateHEader_2;
    QPushButton *pushButton_cancelAddUpdate_2;
    QPushButton *pushButton_submitUpdateStadium;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_Location;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_StadiumName;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(1056, 570);
        AdminWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"	background-color: rgb(236, 236, 236);\n"
"	margin:0 px;\n"
"}\n"
"\n"
"QLabel#label_HeaderNavBarBackground{\n"
"	background-color:rgb(0, 46, 109);\n"
"}\n"
"\n"
"QLabel[accessibleName=\"whiteText\"]{\n"
"	color: white;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"\n"
"}\n"
"\n"
"QLabel[accessibleName=\"darkText\"]{\n"
"	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"}\n"
"\n"
"\n"
"QLabel[accessibleName=transparentBar]{\n"
"	background-color: rgba(31, 34, 31, .50);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton[accessibleName=\"redButton\"]{\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 20px;\n"
"	background-color:rgb(213, 0, 50);\n"
"	color:white;\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QPushButton[accessibleName=\"redButton\"]:hover\n"
"{\n"
"	background-color:#A4070F;\n"
"}\n"
"\n"
"QPushButton[accessibleName=\"blueButton\"]\n"
"{\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: #337ab7;\n"
""
                        "	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton[accessibleName=\"blueButton\"]:hover\n"
"{	\n"
"	background-color: #094C83;\n"
"\n"
"}\n"
"\n"
"QLineEdit[accessibleName=\"inputField\"]{\n"
"	border-radius:5px;\n"
"	border: 1px solid #cccccc;\n"
"}\n"
"\n"
"QDoubleSpinBox\n"
"{\n"
"		border-radius:5px;\n"
"	    border: 1px solid #cccccc;\n"
"}"));
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_NBALogoHome = new QPushButton(centralwidget);
        pushButton_NBALogoHome->setObjectName(QStringLiteral("pushButton_NBALogoHome"));
        pushButton_NBALogoHome->setGeometry(QRect(20, 0, 151, 91));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Images/NBALogo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_NBALogoHome->setIcon(icon);
        pushButton_NBALogoHome->setIconSize(QSize(128, 128));
        pushButton_NBALogoHome->setFlat(true);
        label_NavPageTitleHeader = new QLabel(centralwidget);
        label_NavPageTitleHeader->setObjectName(QStringLiteral("label_NavPageTitleHeader"));
        label_NavPageTitleHeader->setGeometry(QRect(190, 10, 671, 71));
        QFont font;
        font.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font.setPointSize(50);
        label_NavPageTitleHeader->setFont(font);
        label_HeaderNavBarBackground = new QLabel(centralwidget);
        label_HeaderNavBarBackground->setObjectName(QStringLiteral("label_HeaderNavBarBackground"));
        label_HeaderNavBarBackground->setGeometry(QRect(-10, -10, 1081, 101));
        label_HeaderNavBarBackground->setStyleSheet(QStringLiteral("background-color: rgb(23, 64, 139);"));
        pushButton_adminLogout = new QPushButton(centralwidget);
        pushButton_adminLogout->setObjectName(QStringLiteral("pushButton_adminLogout"));
        pushButton_adminLogout->setGeometry(QRect(920, 10, 101, 41));
        QFont font1;
        font1.setPointSize(17);
        pushButton_adminLogout->setFont(font1);
        pushButton_adminLogout->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_adminLogout->setLayoutDirection(Qt::LeftToRight);
        pushButton_adminLogout->setStyleSheet(QStringLiteral("color: white;"));
        pushButton_adminLogout->setIconSize(QSize(64, 64));
        pushButton_adminLogout->setFlat(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 90, 1061, 481));
        MainPage = new QWidget();
        MainPage->setObjectName(QStringLiteral("MainPage"));
        label_seatingCap = new QLabel(MainPage);
        label_seatingCap->setObjectName(QStringLiteral("label_seatingCap"));
        label_seatingCap->setGeometry(QRect(660, 90, 181, 16));
        label_5 = new QLabel(MainPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 110, 141, 16));
        label_3 = new QLabel(MainPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 70, 141, 16));
        pushButton_addSouvenir = new QPushButton(MainPage);
        pushButton_addSouvenir->setObjectName(QStringLiteral("pushButton_addSouvenir"));
        pushButton_addSouvenir->setGeometry(QRect(840, 290, 113, 32));
        pushButton_addSouvenir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_addSouvenir->setStyleSheet(QLatin1String("QPushButton#pushButton_addSouvenir\n"
"{\n"
"    font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: rgb(23, 64, 139);\n"
"	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_addSouvenir:hover\n"
"{	\n"
"	background-color: #337ab7;\n"
"}"));
        label_10 = new QLabel(MainPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 190, 161, 16));
        label_coach = new QLabel(MainPage);
        label_coach->setObjectName(QStringLiteral("label_coach"));
        label_coach->setGeometry(QRect(660, 190, 181, 16));
        tableView_Teams = new QTableView(MainPage);
        tableView_Teams->setObjectName(QStringLiteral("tableView_Teams"));
        tableView_Teams->setGeometry(QRect(60, 60, 241, 391));
        pushButton_AddDataFromFile = new QPushButton(MainPage);
        pushButton_AddDataFromFile->setObjectName(QStringLiteral("pushButton_AddDataFromFile"));
        pushButton_AddDataFromFile->setGeometry(QRect(320, 60, 113, 32));
        pushButton_AddDataFromFile->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AddDataFromFile->setStyleSheet(QLatin1String("QPushButton#pushButton_AddDataFromFile\n"
"{\n"
"    font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: rgb(23, 64, 139);\n"
"	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_AddDataFromFile:hover\n"
"{	\n"
"	background-color: #337ab7;\n"
"}"));
        label_12 = new QLabel(MainPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(450, 240, 371, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 30px;"));
        tableView_Souveniers = new QTableView(MainPage);
        tableView_Souveniers->setObjectName(QStringLiteral("tableView_Souveniers"));
        tableView_Souveniers->setGeometry(QRect(460, 280, 361, 171));
        tableView_Souveniers->setShowGrid(false);
        label_stadiumName = new QLabel(MainPage);
        label_stadiumName->setObjectName(QStringLiteral("label_stadiumName"));
        label_stadiumName->setGeometry(QRect(660, 70, 181, 16));
        pushButton_updateSouvenir = new QPushButton(MainPage);
        pushButton_updateSouvenir->setObjectName(QStringLiteral("pushButton_updateSouvenir"));
        pushButton_updateSouvenir->setGeometry(QRect(840, 330, 113, 32));
        pushButton_updateSouvenir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_updateSouvenir->setStyleSheet(QLatin1String("QPushButton#pushButton_updateSouvenir\n"
"{\n"
"    font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: rgb(23, 64, 139);\n"
"	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_updateSouvenir:hover\n"
"{	\n"
"	background-color: #337ab7;\n"
"}"));
        label_6 = new QLabel(MainPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 130, 111, 16));
        label_4 = new QLabel(MainPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 90, 141, 16));
        label_division = new QLabel(MainPage);
        label_division->setObjectName(QStringLiteral("label_division"));
        label_division->setGeometry(QRect(660, 150, 181, 16));
        label_conference = new QLabel(MainPage);
        label_conference->setObjectName(QStringLiteral("label_conference"));
        label_conference->setGeometry(QRect(660, 130, 181, 16));
        label = new QLabel(MainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 25, 251, 31));
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 30px;"));
        label_yearJoined = new QLabel(MainPage);
        label_yearJoined->setObjectName(QStringLiteral("label_yearJoined"));
        label_yearJoined->setGeometry(QRect(660, 170, 181, 16));
        label_8 = new QLabel(MainPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(470, 150, 111, 16));
        pushButton_updateStadiumInfo = new QPushButton(MainPage);
        pushButton_updateStadiumInfo->setObjectName(QStringLiteral("pushButton_updateStadiumInfo"));
        pushButton_updateStadiumInfo->setGeometry(QRect(840, 70, 113, 32));
        pushButton_updateStadiumInfo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_updateStadiumInfo->setStyleSheet(QLatin1String("QPushButton#pushButton_updateStadiumInfo\n"
"{\n"
"    font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: rgb(23, 64, 139);\n"
"	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_updateStadiumInfo:hover\n"
"{	\n"
"	background-color: #337ab7;\n"
"}"));
        label_location = new QLabel(MainPage);
        label_location->setObjectName(QStringLiteral("label_location"));
        label_location->setGeometry(QRect(660, 110, 181, 16));
        pushButton_deleteSouvenir = new QPushButton(MainPage);
        pushButton_deleteSouvenir->setObjectName(QStringLiteral("pushButton_deleteSouvenir"));
        pushButton_deleteSouvenir->setGeometry(QRect(840, 370, 113, 32));
        pushButton_deleteSouvenir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_deleteSouvenir->setStyleSheet(QLatin1String("QPushButton#pushButton_deleteSouvenir\n"
"{\n"
"    font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	background-color: rgb(23, 64, 139);\n"
"	color: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_deleteSouvenir:hover\n"
"{	\n"
"	background-color: #337ab7;\n"
"}"));
        label_9 = new QLabel(MainPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(470, 170, 161, 16));
        label_7 = new QLabel(MainPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 30, 251, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 30px;"));
        stackedWidget->addWidget(MainPage);
        AddUpdateSouvenir = new QWidget();
        AddUpdateSouvenir->setObjectName(QStringLiteral("AddUpdateSouvenir"));
        label_addUpdateHEader = new QLabel(AddUpdateSouvenir);
        label_addUpdateHEader->setObjectName(QStringLiteral("label_addUpdateHEader"));
        label_addUpdateHEader->setGeometry(QRect(30, 30, 1021, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font3.setPointSize(40);
        label_addUpdateHEader->setFont(font3);
        label_addUpdateHEader->setAlignment(Qt::AlignCenter);
        lineEdit_souvenirName = new QLineEdit(AddUpdateSouvenir);
        lineEdit_souvenirName->setObjectName(QStringLiteral("lineEdit_souvenirName"));
        lineEdit_souvenirName->setGeometry(QRect(410, 120, 251, 31));
        lineEdit_souvenirName->setReadOnly(false);
        pushButton_submitAddUpdate = new QPushButton(AddUpdateSouvenir);
        pushButton_submitAddUpdate->setObjectName(QStringLiteral("pushButton_submitAddUpdate"));
        pushButton_submitAddUpdate->setGeometry(QRect(410, 240, 251, 32));
        pushButton_submitAddUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cancelAddUpdate = new QPushButton(AddUpdateSouvenir);
        pushButton_cancelAddUpdate->setObjectName(QStringLiteral("pushButton_cancelAddUpdate"));
        pushButton_cancelAddUpdate->setGeometry(QRect(410, 280, 251, 32));
        pushButton_cancelAddUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        doubleSpinBox_souvenirPrice = new QDoubleSpinBox(AddUpdateSouvenir);
        doubleSpinBox_souvenirPrice->setObjectName(QStringLiteral("doubleSpinBox_souvenirPrice"));
        doubleSpinBox_souvenirPrice->setGeometry(QRect(410, 160, 251, 31));
        doubleSpinBox_souvenirPrice->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_souvenirPrice->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinBox_souvenirPrice->setMinimum(0.99);
        doubleSpinBox_souvenirPrice->setMaximum(999.99);
        doubleSpinBox_souvenirPrice->setSingleStep(0.01);
        label_2 = new QLabel(AddUpdateSouvenir);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 120, 81, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font4.setPointSize(16);
        label_2->setFont(font4);
        label_2->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        label_14 = new QLabel(AddUpdateSouvenir);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 160, 81, 31));
        label_14->setFont(font4);
        label_14->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        stackedWidget->addWidget(AddUpdateSouvenir);
        UpdateStadium = new QWidget();
        UpdateStadium->setObjectName(QStringLiteral("UpdateStadium"));
        spinBox_yearJoined_2 = new QSpinBox(UpdateStadium);
        spinBox_yearJoined_2->setObjectName(QStringLiteral("spinBox_yearJoined_2"));
        spinBox_yearJoined_2->setGeometry(QRect(360, 250, 251, 31));
        spinBox_yearJoined_2->setStyleSheet(QLatin1String("	border-radius:5px;\n"
"	border: 1px solid #cccccc;"));
        spinBox_yearJoined_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_yearJoined_2->setMinimum(1900);
        spinBox_yearJoined_2->setMaximum(9999);
        spinBox_SeatinCap = new QSpinBox(UpdateStadium);
        spinBox_SeatinCap->setObjectName(QStringLiteral("spinBox_SeatinCap"));
        spinBox_SeatinCap->setGeometry(QRect(360, 170, 251, 31));
        spinBox_SeatinCap->setStyleSheet(QLatin1String("	border-radius:5px;\n"
"	border: 1px solid #cccccc;"));
        spinBox_SeatinCap->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_SeatinCap->setMinimum(10000);
        spinBox_SeatinCap->setMaximum(100000);
        label_addUpdateHEader_2 = new QLabel(UpdateStadium);
        label_addUpdateHEader_2->setObjectName(QStringLiteral("label_addUpdateHEader_2"));
        label_addUpdateHEader_2->setGeometry(QRect(30, 10, 1021, 61));
        label_addUpdateHEader_2->setFont(font3);
        label_addUpdateHEader_2->setAlignment(Qt::AlignCenter);
        pushButton_cancelAddUpdate_2 = new QPushButton(UpdateStadium);
        pushButton_cancelAddUpdate_2->setObjectName(QStringLiteral("pushButton_cancelAddUpdate_2"));
        pushButton_cancelAddUpdate_2->setGeometry(QRect(570, 400, 251, 31));
        pushButton_cancelAddUpdate_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_submitUpdateStadium = new QPushButton(UpdateStadium);
        pushButton_submitUpdateStadium->setObjectName(QStringLiteral("pushButton_submitUpdateStadium"));
        pushButton_submitUpdateStadium->setGeometry(QRect(270, 400, 251, 32));
        pushButton_submitUpdateStadium->setCursor(QCursor(Qt::PointingHandCursor));
        label_15 = new QLabel(UpdateStadium);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 250, 131, 31));
        label_15->setFont(font4);
        label_15->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        label_16 = new QLabel(UpdateStadium);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(140, 170, 191, 31));
        label_16->setFont(font4);
        label_16->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        lineEdit_Location = new QLineEdit(UpdateStadium);
        lineEdit_Location->setObjectName(QStringLiteral("lineEdit_Location"));
        lineEdit_Location->setGeometry(QRect(360, 210, 251, 31));
        lineEdit_Location->setMaxLength(100);
        lineEdit_Location->setReadOnly(false);
        label_18 = new QLabel(UpdateStadium);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(140, 210, 121, 31));
        label_18->setFont(font4);
        label_18->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        label_19 = new QLabel(UpdateStadium);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(140, 130, 191, 31));
        label_19->setFont(font4);
        label_19->setStyleSheet(QLatin1String("	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';"));
        lineEdit_StadiumName = new QLineEdit(UpdateStadium);
        lineEdit_StadiumName->setObjectName(QStringLiteral("lineEdit_StadiumName"));
        lineEdit_StadiumName->setGeometry(QRect(360, 130, 251, 31));
        lineEdit_StadiumName->setMaxLength(100);
        lineEdit_StadiumName->setReadOnly(false);
        stackedWidget->addWidget(UpdateStadium);
        AdminWindow->setCentralWidget(centralwidget);
        stackedWidget->raise();
        label_HeaderNavBarBackground->raise();
        pushButton_NBALogoHome->raise();
        label_NavPageTitleHeader->raise();
        pushButton_adminLogout->raise();

        retranslateUi(AdminWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "MainWindow", nullptr));
        pushButton_NBALogoHome->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_NavPageTitleHeader->setAccessibleName(QApplication::translate("AdminWindow", "whiteText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_NavPageTitleHeader->setText(QApplication::translate("AdminWindow", "NBA Trip Planner", nullptr));
        label_HeaderNavBarBackground->setText(QString());
        pushButton_adminLogout->setText(QApplication::translate("AdminWindow", "Logout", nullptr));
        label_seatingCap->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("AdminWindow", "Location:", nullptr));
        label_3->setText(QApplication::translate("AdminWindow", "Stadium Name:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_addSouvenir->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_addSouvenir->setText(QApplication::translate("AdminWindow", "Add", nullptr));
        label_10->setText(QApplication::translate("AdminWindow", "Coach:", nullptr));
        label_coach->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_AddDataFromFile->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_AddDataFromFile->setText(QApplication::translate("AdminWindow", "Add From File", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_12->setAccessibleName(QApplication::translate("AdminWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_12->setText(QApplication::translate("AdminWindow", "Team Souveniers", nullptr));
        label_stadiumName->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_updateSouvenir->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_updateSouvenir->setText(QApplication::translate("AdminWindow", "Update", nullptr));
        label_6->setText(QApplication::translate("AdminWindow", "Conference:", nullptr));
        label_4->setText(QApplication::translate("AdminWindow", "Seating Capacity:", nullptr));
        label_division->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
        label_conference->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("AdminWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("AdminWindow", "Teams ", nullptr));
        label_yearJoined->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("AdminWindow", "Division:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_updateStadiumInfo->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_updateStadiumInfo->setText(QApplication::translate("AdminWindow", "Update", nullptr));
        label_location->setText(QApplication::translate("AdminWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_deleteSouvenir->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_deleteSouvenir->setText(QApplication::translate("AdminWindow", "Delete", nullptr));
        label_9->setText(QApplication::translate("AdminWindow", "Year Joined:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QApplication::translate("AdminWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("AdminWindow", "Stadium Info", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_addUpdateHEader->setAccessibleName(QApplication::translate("AdminWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_addUpdateHEader->setText(QApplication::translate("AdminWindow", "update Souvenier", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_souvenirName->setAccessibleName(QApplication::translate("AdminWindow", "inputField", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_submitAddUpdate->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_submitAddUpdate->setText(QApplication::translate("AdminWindow", "Submit", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_cancelAddUpdate->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_cancelAddUpdate->setText(QApplication::translate("AdminWindow", "Cancel", nullptr));
        doubleSpinBox_souvenirPrice->setPrefix(QString());
        label_2->setText(QApplication::translate("AdminWindow", "Name:", nullptr));
        label_14->setText(QApplication::translate("AdminWindow", "Cost:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_addUpdateHEader_2->setAccessibleName(QApplication::translate("AdminWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_addUpdateHEader_2->setText(QApplication::translate("AdminWindow", "Update Stadium Info", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_cancelAddUpdate_2->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_cancelAddUpdate_2->setText(QApplication::translate("AdminWindow", "Cancel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_submitUpdateStadium->setAccessibleName(QApplication::translate("AdminWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_submitUpdateStadium->setText(QApplication::translate("AdminWindow", "Submit", nullptr));
        label_15->setText(QApplication::translate("AdminWindow", "Year Joined:", nullptr));
        label_16->setText(QApplication::translate("AdminWindow", "Seat Capacity:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_Location->setAccessibleName(QApplication::translate("AdminWindow", "inputField", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_Location->setInputMask(QString());
        lineEdit_Location->setText(QString());
        lineEdit_Location->setPlaceholderText(QString());
        label_18->setText(QApplication::translate("AdminWindow", "Location:", nullptr));
        label_19->setText(QApplication::translate("AdminWindow", "Stadium Name:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_StadiumName->setAccessibleName(QApplication::translate("AdminWindow", "inputField", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_StadiumName->setText(QString());
        lineEdit_StadiumName->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
