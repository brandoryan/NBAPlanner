/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_HeaderNavBarBackground;
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QLabel *label_TransparentBackground;
    QPushButton *pushButton_ToPlanTripPage;
    QPushButton *pushButton_ToViewStadiumsPage;
    QFrame *line_SeparatorWhite_2;
    QLabel *label_25;
    QWidget *AdminLoginPage;
    QLineEdit *lineEdit_userName;
    QLabel *label_loginHeader;
    QPushButton *pushButton_cancelLogin;
    QPushButton *pushButton_submitLogin;
    QLineEdit *lineEdit_password;
    QLabel *label_whiteBackground;
    QLabel *label_loginStatus;
    QWidget *ViewSingleTeamInfoPage;
    QPushButton *pushButton_backToHome_3;
    QLabel *label_Logo;
    QLabel *label_teamNameHeader;
    QLabel *label_yearJoined;
    QLabel *label_Conference;
    QLabel *label_location;
    QLabel *label_Coach;
    QLabel *label_stadiumName;
    QLabel *label_seatingCap;
    QLabel *label_Division;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_TransparentBackground_3;
    QWidget *ViewTeamSouvenirsPage;
    QLabel *label_teamNameHeader_2;
    QPushButton *pushButton_backToHome_7;
    QLabel *label_teamSouvenirsHeader;
    QTableView *tableView_stadiumSouvenirs_2;
    QLabel *label_singleTeamSouvBackground;
    QLabel *label_TransparentBackground_11;
    QLabel *label_TransparentBackground_12;
    QWidget *ViewStadiumsPage;
    QPushButton *pushButton_backToHome_2;
    QTableView *tableView_StadiumData;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_seatingCap;
    QRadioButton *radioButton_sortYearJoined;
    QLabel *label_13;
    QLabel *label_14;
    QRadioButton *radioButton_EasternFilter;
    QRadioButton *radioButton_WesternFilter;
    QRadioButton *radioButton_southEastFilter;
    QRadioButton *radioButton_southWestFilter;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton_sortStadiumName;
    QRadioButton *radioButton_sortTeamName;
    QLabel *label_15;
    QRadioButton *radioButton_coachFilter;
    QLabel *label_extraInfo;
    QPushButton *pushButton_toViewSingleTeamPage;
    QLabel *label_TransparentBackground_2;
    QPushButton *pushButton_toViewSouvenirsPage;
    QWidget *PlanTripPage;
    QWidget *DijkstraCustomStopPage;
    QWidget *CustomTripPage;
    QComboBox *comboBox_customStartPoint;
    QLabel *label_12;
    QLabel *label_21;
    QPushButton *pushButton_StartCustomTrip;
    QPushButton *pushButton_AddCustomStop;
    QLabel *label_TransparentBackground_10;
    QTableView *tableView_CustomStopsTable;
    QLabel *label_customTripHeader_4;
    QCheckBox *checkBox_takeFastestRoute;
    QWidget *TripStopPage;
    QLabel *label_tripStopHeader;
    QTableView *tableView_stadiumSouvenirs;
    QWidget *TripDrivingPage;
    QWidget *TripEndedPage;
    QPushButton *pushButton_backToHome;
    QWidget *ViewMSTPage;
    QPushButton *pushButton_backToHome_6;
    QPushButton *pushButton_NBALogoHome;
    QLabel *label_NavPageTitleHeader;
    QPushButton *pushButton_ToAdminLoginPage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1056, 570);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"background-color:rgb(236, 236, 236);\n"
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
"	col"
                        "or: white;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton[accessibleName=\"blueButton\"]:hover\n"
"{	\n"
"	background-color: #094C83;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit[accessibleName=\"inputField\"]{\n"
"	border-radius:5px;\n"
"	border: 1px solid #cccccc;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_HeaderNavBarBackground = new QLabel(centralWidget);
        label_HeaderNavBarBackground->setObjectName(QStringLiteral("label_HeaderNavBarBackground"));
        label_HeaderNavBarBackground->setGeometry(QRect(-20, -10, 1081, 101));
        label_HeaderNavBarBackground->setStyleSheet(QStringLiteral("background-color: rgb(23, 64, 139);"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 90, 1061, 481));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        MainPage = new QWidget();
        MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->setStyleSheet(QStringLiteral(""));
        label_TransparentBackground = new QLabel(MainPage);
        label_TransparentBackground->setObjectName(QStringLiteral("label_TransparentBackground"));
        label_TransparentBackground->setGeometry(QRect(170, 140, 701, 131));
        label_TransparentBackground->setStyleSheet(QLatin1String("	background-color: rgba(31, 34, 31, .70);\n"
"\n"
"	border-radius: 10px;\n"
""));
        pushButton_ToPlanTripPage = new QPushButton(MainPage);
        pushButton_ToPlanTripPage->setObjectName(QStringLiteral("pushButton_ToPlanTripPage"));
        pushButton_ToPlanTripPage->setGeometry(QRect(590, 180, 211, 51));
        pushButton_ToPlanTripPage->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ToPlanTripPage->setStyleSheet(QLatin1String("QPushButton#pushButton_ToPlanTripPage{\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 20px;\n"
"	background-color:rgb(206,17,65);\n"
"	color:white;\n"
"	border-radius:10px;\n"
"}	\n"
"\n"
"QPushButton#pushButton_ToPlanTripPage:hover{\n"
"	background-color:#A4070F;\n"
"}"));
        pushButton_ToViewStadiumsPage = new QPushButton(MainPage);
        pushButton_ToViewStadiumsPage->setObjectName(QStringLiteral("pushButton_ToViewStadiumsPage"));
        pushButton_ToViewStadiumsPage->setGeometry(QRect(240, 180, 211, 51));
        pushButton_ToViewStadiumsPage->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ToViewStadiumsPage->setStyleSheet(QLatin1String("QPushButton#pushButton_ToViewStadiumsPage{\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"	font-size: 20px;\n"
"	background-color:rgb(206,17,65);\n"
"	color:white;\n"
"	border-radius:10px;\n"
"}	\n"
"\n"
"QPushButton#pushButton_ToViewStadiumsPage:hover\n"
"{\n"
"	background-color:#A4070F;\n"
"}"));
        line_SeparatorWhite_2 = new QFrame(MainPage);
        line_SeparatorWhite_2->setObjectName(QStringLiteral("line_SeparatorWhite_2"));
        line_SeparatorWhite_2->setGeometry(QRect(510, 160, 20, 91));
        line_SeparatorWhite_2->setFrameShape(QFrame::VLine);
        line_SeparatorWhite_2->setFrameShadow(QFrame::Sunken);
        label_25 = new QLabel(MainPage);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(0, -150, 1061, 681));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Images/BasketballTest.jpg")));
        label_25->setScaledContents(true);
        stackedWidget->addWidget(MainPage);
        label_25->raise();
        label_TransparentBackground->raise();
        pushButton_ToPlanTripPage->raise();
        pushButton_ToViewStadiumsPage->raise();
        line_SeparatorWhite_2->raise();
        AdminLoginPage = new QWidget();
        AdminLoginPage->setObjectName(QStringLiteral("AdminLoginPage"));
        lineEdit_userName = new QLineEdit(AdminLoginPage);
        lineEdit_userName->setObjectName(QStringLiteral("lineEdit_userName"));
        lineEdit_userName->setGeometry(QRect(360, 110, 331, 31));
        lineEdit_userName->setFocusPolicy(Qt::ClickFocus);
        label_loginHeader = new QLabel(AdminLoginPage);
        label_loginHeader->setObjectName(QStringLiteral("label_loginHeader"));
        label_loginHeader->setGeometry(QRect(20, 10, 1011, 81));
        QFont font;
        font.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        label_loginHeader->setFont(font);
        label_loginHeader->setAlignment(Qt::AlignCenter);
        pushButton_cancelLogin = new QPushButton(AdminLoginPage);
        pushButton_cancelLogin->setObjectName(QStringLiteral("pushButton_cancelLogin"));
        pushButton_cancelLogin->setGeometry(QRect(360, 280, 331, 32));
        pushButton_cancelLogin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cancelLogin->setStyleSheet(QStringLiteral("background-color: rgb(23, 64, 139);"));
        pushButton_submitLogin = new QPushButton(AdminLoginPage);
        pushButton_submitLogin->setObjectName(QStringLiteral("pushButton_submitLogin"));
        pushButton_submitLogin->setGeometry(QRect(360, 240, 331, 32));
        pushButton_submitLogin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_submitLogin->setStyleSheet(QStringLiteral("background-color: rgb(23, 64, 139);"));
        lineEdit_password = new QLineEdit(AdminLoginPage);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(360, 150, 331, 31));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_whiteBackground = new QLabel(AdminLoginPage);
        label_whiteBackground->setObjectName(QStringLiteral("label_whiteBackground"));
        label_whiteBackground->setGeometry(QRect(0, 0, 1061, 481));
        label_whiteBackground->setStyleSheet(QStringLiteral("background-color:white;"));
        label_loginStatus = new QLabel(AdminLoginPage);
        label_loginStatus->setObjectName(QStringLiteral("label_loginStatus"));
        label_loginStatus->setGeometry(QRect(360, 110, 331, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_loginStatus->setFont(font1);
        stackedWidget->addWidget(AdminLoginPage);
        label_whiteBackground->raise();
        label_loginHeader->raise();
        pushButton_submitLogin->raise();
        lineEdit_userName->raise();
        pushButton_cancelLogin->raise();
        lineEdit_password->raise();
        label_loginStatus->raise();
        ViewSingleTeamInfoPage = new QWidget();
        ViewSingleTeamInfoPage->setObjectName(QStringLiteral("ViewSingleTeamInfoPage"));
        ViewSingleTeamInfoPage->setStyleSheet(QLatin1String("QLabel[accessibleName=\"stadiumData\"]\n"
"{\n"
"	\n"
"	font-size: 20px;\n"
"	font-weight:bold;\n"
"	color: #353535;\n"
"	font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"}"));
        pushButton_backToHome_3 = new QPushButton(ViewSingleTeamInfoPage);
        pushButton_backToHome_3->setObjectName(QStringLiteral("pushButton_backToHome_3"));
        pushButton_backToHome_3->setGeometry(QRect(0, 200, 211, 31));
        QFont font2;
        font2.setPointSize(12);
        pushButton_backToHome_3->setFont(font2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Images/leftArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_backToHome_3->setIcon(icon);
        pushButton_backToHome_3->setFlat(true);
        label_Logo = new QLabel(ViewSingleTeamInfoPage);
        label_Logo->setObjectName(QStringLiteral("label_Logo"));
        label_Logo->setGeometry(QRect(300, 110, 541, 361));
        label_Logo->setStyleSheet(QStringLiteral(""));
        label_Logo->setTextFormat(Qt::AutoText);
        label_Logo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Icons/Atlanta Hawks.png")));
        label_Logo->setScaledContents(true);
        label_teamNameHeader = new QLabel(ViewSingleTeamInfoPage);
        label_teamNameHeader->setObjectName(QStringLiteral("label_teamNameHeader"));
        label_teamNameHeader->setGeometry(QRect(0, 0, 1051, 101));
        QFont font3;
        font3.setPointSize(35);
        label_teamNameHeader->setFont(font3);
        label_teamNameHeader->setStyleSheet(QStringLiteral("color:white;"));
        label_teamNameHeader->setAlignment(Qt::AlignCenter);
        label_yearJoined = new QLabel(ViewSingleTeamInfoPage);
        label_yearJoined->setObjectName(QStringLiteral("label_yearJoined"));
        label_yearJoined->setGeometry(QRect(730, 282, 281, 24));
        label_yearJoined->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_Conference = new QLabel(ViewSingleTeamInfoPage);
        label_Conference->setObjectName(QStringLiteral("label_Conference"));
        label_Conference->setGeometry(QRect(730, 220, 281, 24));
        label_Conference->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_location = new QLabel(ViewSingleTeamInfoPage);
        label_location->setObjectName(QStringLiteral("label_location"));
        label_location->setGeometry(QRect(730, 190, 331, 24));
        label_location->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_Coach = new QLabel(ViewSingleTeamInfoPage);
        label_Coach->setObjectName(QStringLiteral("label_Coach"));
        label_Coach->setGeometry(QRect(730, 314, 291, 24));
        label_Coach->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_stadiumName = new QLabel(ViewSingleTeamInfoPage);
        label_stadiumName->setObjectName(QStringLiteral("label_stadiumName"));
        label_stadiumName->setGeometry(QRect(730, 122, 311, 24));
        label_stadiumName->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_seatingCap = new QLabel(ViewSingleTeamInfoPage);
        label_seatingCap->setObjectName(QStringLiteral("label_seatingCap"));
        label_seatingCap->setGeometry(QRect(730, 160, 341, 24));
        label_seatingCap->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_Division = new QLabel(ViewSingleTeamInfoPage);
        label_Division->setObjectName(QStringLiteral("label_Division"));
        label_Division->setGeometry(QRect(730, 250, 331, 24));
        label_Division->setStyleSheet(QStringLiteral("color: rgb(0,0,0);"));
        label_6 = new QLabel(ViewSingleTeamInfoPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 220, 191, 24));
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(ViewSingleTeamInfoPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 190, 171, 24));
        label_7->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(ViewSingleTeamInfoPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(270, 250, 191, 24));
        label_9->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(ViewSingleTeamInfoPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(270, 282, 161, 24));
        label_8->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(ViewSingleTeamInfoPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 122, 211, 24));
        QFont font4;
        font4.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_10 = new QLabel(ViewSingleTeamInfoPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 310, 121, 24));
        label_10->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(ViewSingleTeamInfoPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 160, 211, 24));
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_TransparentBackground_3 = new QLabel(ViewSingleTeamInfoPage);
        label_TransparentBackground_3->setObjectName(QStringLiteral("label_TransparentBackground_3"));
        label_TransparentBackground_3->setGeometry(QRect(40, 0, 971, 101));
        label_TransparentBackground_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgba(153,153,153,0.5);\n"
""));
        stackedWidget->addWidget(ViewSingleTeamInfoPage);
        label_TransparentBackground_3->raise();
        label_Logo->raise();
        label_yearJoined->raise();
        label_Conference->raise();
        label_location->raise();
        label_Coach->raise();
        label_stadiumName->raise();
        label_seatingCap->raise();
        label_Division->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_8->raise();
        label_5->raise();
        label_10->raise();
        label_4->raise();
        label_teamNameHeader->raise();
        pushButton_backToHome_3->raise();
        ViewTeamSouvenirsPage = new QWidget();
        ViewTeamSouvenirsPage->setObjectName(QStringLiteral("ViewTeamSouvenirsPage"));
        label_teamNameHeader_2 = new QLabel(ViewTeamSouvenirsPage);
        label_teamNameHeader_2->setObjectName(QStringLiteral("label_teamNameHeader_2"));
        label_teamNameHeader_2->setGeometry(QRect(10, -10, 1041, 101));
        QFont font5;
        font5.setPointSize(50);
        label_teamNameHeader_2->setFont(font5);
        label_teamNameHeader_2->setStyleSheet(QStringLiteral("color:rgb(206,17,65);;"));
        label_teamNameHeader_2->setAlignment(Qt::AlignCenter);
        pushButton_backToHome_7 = new QPushButton(ViewTeamSouvenirsPage);
        pushButton_backToHome_7->setObjectName(QStringLiteral("pushButton_backToHome_7"));
        pushButton_backToHome_7->setGeometry(QRect(0, 190, 201, 31));
        pushButton_backToHome_7->setFont(font2);
        pushButton_backToHome_7->setStyleSheet(QStringLiteral("color: white;"));
        pushButton_backToHome_7->setIcon(icon);
        pushButton_backToHome_7->setFlat(true);
        label_teamSouvenirsHeader = new QLabel(ViewTeamSouvenirsPage);
        label_teamSouvenirsHeader->setObjectName(QStringLiteral("label_teamSouvenirsHeader"));
        label_teamSouvenirsHeader->setGeometry(QRect(190, 130, 721, 51));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font6.setPointSize(35);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(true);
        font6.setWeight(75);
        label_teamSouvenirsHeader->setFont(font6);
        label_teamSouvenirsHeader->setLayoutDirection(Qt::LeftToRight);
        label_teamSouvenirsHeader->setStyleSheet(QLatin1String("color: rgb(23, 64, 139);\n"
""));
        label_teamSouvenirsHeader->setAlignment(Qt::AlignCenter);
        tableView_stadiumSouvenirs_2 = new QTableView(ViewTeamSouvenirsPage);
        tableView_stadiumSouvenirs_2->setObjectName(QStringLiteral("tableView_stadiumSouvenirs_2"));
        tableView_stadiumSouvenirs_2->setGeometry(QRect(220, 200, 661, 241));
        QFont font7;
        font7.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font7.setPointSize(17);
        font7.setBold(true);
        font7.setWeight(75);
        tableView_stadiumSouvenirs_2->setFont(font7);
        tableView_stadiumSouvenirs_2->setStyleSheet(QLatin1String("font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"background-color: transparent;\n"
"color: white;\n"
""));
        tableView_stadiumSouvenirs_2->setShowGrid(false);
        tableView_stadiumSouvenirs_2->horizontalHeader()->setVisible(false);
        tableView_stadiumSouvenirs_2->verticalHeader()->setVisible(false);
        label_singleTeamSouvBackground = new QLabel(ViewTeamSouvenirsPage);
        label_singleTeamSouvBackground->setObjectName(QStringLiteral("label_singleTeamSouvBackground"));
        label_singleTeamSouvBackground->setGeometry(QRect(0, 0, 1061, 481));
        label_singleTeamSouvBackground->setAutoFillBackground(false);
        label_singleTeamSouvBackground->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Images/Basketball.jpg")));
        label_TransparentBackground_11 = new QLabel(ViewTeamSouvenirsPage);
        label_TransparentBackground_11->setObjectName(QStringLiteral("label_TransparentBackground_11"));
        label_TransparentBackground_11->setGeometry(QRect(220, 200, 661, 241));
        label_TransparentBackground_11->setStyleSheet(QLatin1String("	background-color: rgba(0, 0, 0, .70);\n"
"	border-radius: 10px;\n"
""));
        label_TransparentBackground_12 = new QLabel(ViewTeamSouvenirsPage);
        label_TransparentBackground_12->setObjectName(QStringLiteral("label_TransparentBackground_12"));
        label_TransparentBackground_12->setGeometry(QRect(60, 0, 931, 101));
        label_TransparentBackground_12->setStyleSheet(QLatin1String("	background-color: rgba(0, 0, 0, .70);\n"
"	border-radius: 10px;\n"
""));
        stackedWidget->addWidget(ViewTeamSouvenirsPage);
        label_singleTeamSouvBackground->raise();
        label_TransparentBackground_12->raise();
        label_TransparentBackground_11->raise();
        label_teamNameHeader_2->raise();
        label_teamSouvenirsHeader->raise();
        pushButton_backToHome_7->raise();
        tableView_stadiumSouvenirs_2->raise();
        ViewStadiumsPage = new QWidget();
        ViewStadiumsPage->setObjectName(QStringLiteral("ViewStadiumsPage"));
        ViewStadiumsPage->setStyleSheet(QLatin1String("QHeaderView::section { \n"
" font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"font-weight: bold;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background-color:rgb(0, 46, 109);\n"
"}"));
        pushButton_backToHome_2 = new QPushButton(ViewStadiumsPage);
        pushButton_backToHome_2->setObjectName(QStringLiteral("pushButton_backToHome_2"));
        pushButton_backToHome_2->setGeometry(QRect(-10, 10, 211, 32));
        QFont font8;
        font8.setPointSize(10);
        pushButton_backToHome_2->setFont(font8);
        pushButton_backToHome_2->setIcon(icon);
        pushButton_backToHome_2->setFlat(true);
        tableView_StadiumData = new QTableView(ViewStadiumsPage);
        tableView_StadiumData->setObjectName(QStringLiteral("tableView_StadiumData"));
        tableView_StadiumData->setGeometry(QRect(280, 50, 601, 361));
        QFont font9;
        font9.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font9.setPointSize(15);
        font9.setBold(true);
        font9.setWeight(75);
        tableView_StadiumData->setFont(font9);
        tableView_StadiumData->setStyleSheet(QLatin1String("font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"color: white;\n"
"background-color: transparent;\n"
"\n"
""));
        tableView_StadiumData->setFrameShape(QFrame::NoFrame);
        tableView_StadiumData->setFrameShadow(QFrame::Plain);
        tableView_StadiumData->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_StadiumData->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView_StadiumData->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView_StadiumData->setShowGrid(false);
        tableView_StadiumData->setWordWrap(false);
        tableView_StadiumData->setCornerButtonEnabled(false);
        tableView_StadiumData->horizontalHeader()->setVisible(false);
        tableView_StadiumData->horizontalHeader()->setHighlightSections(false);
        tableView_StadiumData->verticalHeader()->setVisible(false);
        tableView_StadiumData->verticalHeader()->setHighlightSections(false);
        groupBox_2 = new QGroupBox(ViewStadiumsPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 40, 251, 391));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        groupBox_2->setFlat(false);
        radioButton_seatingCap = new QRadioButton(groupBox_2);
        radioButton_seatingCap->setObjectName(QStringLiteral("radioButton_seatingCap"));
        radioButton_seatingCap->setGeometry(QRect(20, 90, 128, 20));
        radioButton_sortYearJoined = new QRadioButton(groupBox_2);
        radioButton_sortYearJoined->setObjectName(QStringLiteral("radioButton_sortYearJoined"));
        radioButton_sortYearJoined->setGeometry(QRect(20, 70, 105, 20));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 10, 91, 21));
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setWeight(75);
        label_13->setFont(font10);
        label_13->setStyleSheet(QStringLiteral("c"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 120, 101, 31));
        label_14->setFont(font10);
        radioButton_EasternFilter = new QRadioButton(groupBox_2);
        radioButton_EasternFilter->setObjectName(QStringLiteral("radioButton_EasternFilter"));
        radioButton_EasternFilter->setGeometry(QRect(20, 170, 131, 21));
        radioButton_WesternFilter = new QRadioButton(groupBox_2);
        radioButton_WesternFilter->setObjectName(QStringLiteral("radioButton_WesternFilter"));
        radioButton_WesternFilter->setGeometry(QRect(20, 190, 131, 20));
        radioButton_southEastFilter = new QRadioButton(groupBox_2);
        radioButton_southEastFilter->setObjectName(QStringLiteral("radioButton_southEastFilter"));
        radioButton_southEastFilter->setGeometry(QRect(20, 240, 141, 20));
        radioButton_southWestFilter = new QRadioButton(groupBox_2);
        radioButton_southWestFilter->setObjectName(QStringLiteral("radioButton_southWestFilter"));
        radioButton_southWestFilter->setGeometry(QRect(20, 260, 141, 20));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 81, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 220, 51, 16));
        label_3->setFont(font1);
        radioButton_sortStadiumName = new QRadioButton(groupBox_2);
        radioButton_sortStadiumName->setObjectName(QStringLiteral("radioButton_sortStadiumName"));
        radioButton_sortStadiumName->setGeometry(QRect(20, 50, 128, 20));
        radioButton_sortTeamName = new QRadioButton(groupBox_2);
        radioButton_sortTeamName->setObjectName(QStringLiteral("radioButton_sortTeamName"));
        radioButton_sortTeamName->setGeometry(QRect(20, 30, 128, 20));
        radioButton_sortTeamName->setIconSize(QSize(12, 12));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 290, 161, 16));
        label_15->setFont(font1);
        radioButton_coachFilter = new QRadioButton(groupBox_2);
        radioButton_coachFilter->setObjectName(QStringLiteral("radioButton_coachFilter"));
        radioButton_coachFilter->setGeometry(QRect(20, 310, 90, 20));
        QFont font11;
        font11.setPointSize(8);
        radioButton_coachFilter->setFont(font11);
        label_extraInfo = new QLabel(ViewStadiumsPage);
        label_extraInfo->setObjectName(QStringLiteral("label_extraInfo"));
        label_extraInfo->setGeometry(QRect(290, 430, 601, 41));
        QFont font12;
        font12.setPointSize(20);
        font12.setBold(true);
        font12.setWeight(75);
        label_extraInfo->setFont(font12);
        pushButton_toViewSingleTeamPage = new QPushButton(ViewStadiumsPage);
        pushButton_toViewSingleTeamPage->setObjectName(QStringLiteral("pushButton_toViewSingleTeamPage"));
        pushButton_toViewSingleTeamPage->setGeometry(QRect(900, 50, 141, 41));
        QFont font13;
        font13.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        pushButton_toViewSingleTeamPage->setFont(font13);
        pushButton_toViewSingleTeamPage->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_toViewSingleTeamPage->setStyleSheet(QStringLiteral("background-color: rgb(206,17,65);"));
        label_TransparentBackground_2 = new QLabel(ViewStadiumsPage);
        label_TransparentBackground_2->setObjectName(QStringLiteral("label_TransparentBackground_2"));
        label_TransparentBackground_2->setGeometry(QRect(280, 50, 601, 361));
        label_TransparentBackground_2->setStyleSheet(QLatin1String("	background-color: rgba(31, 34, 31, .30);\n"
"\n"
"	border-radius: 5px;\n"
""));
        pushButton_toViewSouvenirsPage = new QPushButton(ViewStadiumsPage);
        pushButton_toViewSouvenirsPage->setObjectName(QStringLiteral("pushButton_toViewSouvenirsPage"));
        pushButton_toViewSouvenirsPage->setEnabled(true);
        pushButton_toViewSouvenirsPage->setGeometry(QRect(900, 110, 141, 41));
        pushButton_toViewSouvenirsPage->setFont(font13);
        pushButton_toViewSouvenirsPage->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_toViewSouvenirsPage->setStyleSheet(QStringLiteral("background-color: rgb(206,17,65);"));
        stackedWidget->addWidget(ViewStadiumsPage);
        label_TransparentBackground_2->raise();
        pushButton_backToHome_2->raise();
        tableView_StadiumData->raise();
        groupBox_2->raise();
        label_extraInfo->raise();
        pushButton_toViewSingleTeamPage->raise();
        pushButton_toViewSouvenirsPage->raise();
        PlanTripPage = new QWidget();
        PlanTripPage->setObjectName(QStringLiteral("PlanTripPage"));
        stackedWidget->addWidget(PlanTripPage);
        DijkstraCustomStopPage = new QWidget();
        DijkstraCustomStopPage->setObjectName(QStringLiteral("DijkstraCustomStopPage"));
        DijkstraCustomStopPage->setStyleSheet(QLatin1String("QHeaderView::section { \n"
" font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"font-weight: bold;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background-color:rgb(0, 46, 109);\n"
"}"));
        stackedWidget->addWidget(DijkstraCustomStopPage);
        CustomTripPage = new QWidget();
        CustomTripPage->setObjectName(QStringLiteral("CustomTripPage"));
        comboBox_customStartPoint = new QComboBox(CustomTripPage);
        comboBox_customStartPoint->setObjectName(QStringLiteral("comboBox_customStartPoint"));
        comboBox_customStartPoint->setGeometry(QRect(30, 130, 201, 41));
        label_12 = new QLabel(CustomTripPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 100, 231, 20));
        QFont font14;
        font14.setPointSize(10);
        font14.setBold(true);
        font14.setWeight(75);
        label_12->setFont(font14);
        label_21 = new QLabel(CustomTripPage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(340, 100, 541, 21));
        QFont font15;
        font15.setPointSize(13);
        font15.setBold(true);
        font15.setWeight(75);
        label_21->setFont(font15);
        pushButton_StartCustomTrip = new QPushButton(CustomTripPage);
        pushButton_StartCustomTrip->setObjectName(QStringLiteral("pushButton_StartCustomTrip"));
        pushButton_StartCustomTrip->setGeometry(QRect(820, 180, 113, 32));
        pushButton_StartCustomTrip->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AddCustomStop = new QPushButton(CustomTripPage);
        pushButton_AddCustomStop->setObjectName(QStringLiteral("pushButton_AddCustomStop"));
        pushButton_AddCustomStop->setGeometry(QRect(820, 140, 113, 32));
        pushButton_AddCustomStop->setCursor(QCursor(Qt::PointingHandCursor));
        label_TransparentBackground_10 = new QLabel(CustomTripPage);
        label_TransparentBackground_10->setObjectName(QStringLiteral("label_TransparentBackground_10"));
        label_TransparentBackground_10->setGeometry(QRect(340, 130, 431, 331));
        label_TransparentBackground_10->setStyleSheet(QLatin1String("	background-color: rgba(31, 34, 31, .30);\n"
"\n"
"	border-radius: 5px;\n"
""));
        tableView_CustomStopsTable = new QTableView(CustomTripPage);
        tableView_CustomStopsTable->setObjectName(QStringLiteral("tableView_CustomStopsTable"));
        tableView_CustomStopsTable->setGeometry(QRect(340, 130, 431, 321));
        tableView_CustomStopsTable->setFont(font9);
        tableView_CustomStopsTable->setStyleSheet(QLatin1String("font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"color: white;\n"
"background-color: transparent;\n"
"\n"
""));
        tableView_CustomStopsTable->setFrameShape(QFrame::NoFrame);
        tableView_CustomStopsTable->setFrameShadow(QFrame::Plain);
        tableView_CustomStopsTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_CustomStopsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView_CustomStopsTable->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView_CustomStopsTable->setShowGrid(false);
        tableView_CustomStopsTable->setWordWrap(false);
        tableView_CustomStopsTable->setCornerButtonEnabled(false);
        tableView_CustomStopsTable->horizontalHeader()->setVisible(false);
        tableView_CustomStopsTable->horizontalHeader()->setHighlightSections(false);
        tableView_CustomStopsTable->verticalHeader()->setVisible(false);
        tableView_CustomStopsTable->verticalHeader()->setHighlightSections(false);
        label_customTripHeader_4 = new QLabel(CustomTripPage);
        label_customTripHeader_4->setObjectName(QStringLiteral("label_customTripHeader_4"));
        label_customTripHeader_4->setGeometry(QRect(0, 10, 1051, 81));
        QFont font16;
        font16.setFamily(QStringLiteral("Harmonia Sans Pro,Arial,sans-serif"));
        font16.setPointSize(40);
        font16.setBold(true);
        font16.setWeight(75);
        label_customTripHeader_4->setFont(font16);
        label_customTripHeader_4->setAlignment(Qt::AlignCenter);
        checkBox_takeFastestRoute = new QCheckBox(CustomTripPage);
        checkBox_takeFastestRoute->setObjectName(QStringLiteral("checkBox_takeFastestRoute"));
        checkBox_takeFastestRoute->setGeometry(QRect(820, 240, 151, 20));
        stackedWidget->addWidget(CustomTripPage);
        TripStopPage = new QWidget();
        TripStopPage->setObjectName(QStringLiteral("TripStopPage"));
        label_tripStopHeader = new QLabel(TripStopPage);
        label_tripStopHeader->setObjectName(QStringLiteral("label_tripStopHeader"));
        label_tripStopHeader->setGeometry(QRect(50, 5, 951, 91));
        tableView_stadiumSouvenirs = new QTableView(TripStopPage);
        tableView_stadiumSouvenirs->setObjectName(QStringLiteral("tableView_stadiumSouvenirs"));
        tableView_stadiumSouvenirs->setGeometry(QRect(270, 170, 561, 221));
        tableView_stadiumSouvenirs->setFont(font7);
        tableView_stadiumSouvenirs->setStyleSheet(QLatin1String("font-family:'Harmonia Sans Pro,Arial,sans-serif';\n"
"background-color: transparent;\n"
"color: white;\n"
""));
        tableView_stadiumSouvenirs->setShowGrid(false);
        tableView_stadiumSouvenirs->horizontalHeader()->setVisible(false);
        tableView_stadiumSouvenirs->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(TripStopPage);
        TripDrivingPage = new QWidget();
        TripDrivingPage->setObjectName(QStringLiteral("TripDrivingPage"));
        stackedWidget->addWidget(TripDrivingPage);
        TripEndedPage = new QWidget();
        TripEndedPage->setObjectName(QStringLiteral("TripEndedPage"));
        pushButton_backToHome = new QPushButton(TripEndedPage);
        pushButton_backToHome->setObjectName(QStringLiteral("pushButton_backToHome"));
        pushButton_backToHome->setGeometry(QRect(20, 20, 101, 32));
        pushButton_backToHome->setIcon(icon);
        pushButton_backToHome->setFlat(true);
        stackedWidget->addWidget(TripEndedPage);
        ViewMSTPage = new QWidget();
        ViewMSTPage->setObjectName(QStringLiteral("ViewMSTPage"));
        pushButton_backToHome_6 = new QPushButton(ViewMSTPage);
        pushButton_backToHome_6->setObjectName(QStringLiteral("pushButton_backToHome_6"));
        pushButton_backToHome_6->setGeometry(QRect(50, 20, 141, 32));
        pushButton_backToHome_6->setIcon(icon);
        pushButton_backToHome_6->setFlat(true);
        stackedWidget->addWidget(ViewMSTPage);
        pushButton_NBALogoHome = new QPushButton(centralWidget);
        pushButton_NBALogoHome->setObjectName(QStringLiteral("pushButton_NBALogoHome"));
        pushButton_NBALogoHome->setEnabled(true);
        pushButton_NBALogoHome->setGeometry(QRect(0, 0, 171, 91));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Images/NBALogo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_NBALogoHome->setIcon(icon1);
        pushButton_NBALogoHome->setIconSize(QSize(128, 128));
        pushButton_NBALogoHome->setFlat(true);
        label_NavPageTitleHeader = new QLabel(centralWidget);
        label_NavPageTitleHeader->setObjectName(QStringLiteral("label_NavPageTitleHeader"));
        label_NavPageTitleHeader->setGeometry(QRect(190, 0, 701, 91));
        QFont font17;
        font17.setFamily(QStringLiteral("Baskerville Old Face"));
        font17.setPointSize(38);
        font17.setBold(false);
        font17.setWeight(50);
        label_NavPageTitleHeader->setFont(font17);
        label_NavPageTitleHeader->setStyleSheet(QStringLiteral("color:white;"));
        label_NavPageTitleHeader->setTextFormat(Qt::PlainText);
        pushButton_ToAdminLoginPage = new QPushButton(centralWidget);
        pushButton_ToAdminLoginPage->setObjectName(QStringLiteral("pushButton_ToAdminLoginPage"));
        pushButton_ToAdminLoginPage->setGeometry(QRect(1000, 10, 51, 31));
        pushButton_ToAdminLoginPage->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Images/AdminLoginLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ToAdminLoginPage->setIcon(icon2);
        pushButton_ToAdminLoginPage->setIconSize(QSize(64, 64));
        pushButton_ToAdminLoginPage->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);
        stackedWidget->raise();
        label_HeaderNavBarBackground->raise();
        pushButton_NBALogoHome->raise();
        label_NavPageTitleHeader->raise();
        pushButton_ToAdminLoginPage->raise();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_HeaderNavBarBackground->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        pushButton_ToPlanTripPage->setAccessibleName(QApplication::translate("MainWindow", "redButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_ToPlanTripPage->setText(QApplication::translate("MainWindow", "Plan Trip", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_ToViewStadiumsPage->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_ToViewStadiumsPage->setText(QApplication::translate("MainWindow", "View Teams", nullptr));
        label_25->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_userName->setAccessibleName(QApplication::translate("MainWindow", "inputField", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_userName->setPlaceholderText(QApplication::translate("MainWindow", "Username", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_loginHeader->setAccessibleName(QApplication::translate("MainWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_loginHeader->setText(QApplication::translate("MainWindow", "Login", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_cancelLogin->setAccessibleName(QApplication::translate("MainWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_cancelLogin->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_submitLogin->setAccessibleName(QApplication::translate("MainWindow", "blueButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_submitLogin->setText(QApplication::translate("MainWindow", "Submit", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_password->setAccessibleName(QApplication::translate("MainWindow", "inputField", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        label_whiteBackground->setText(QString());
        label_loginStatus->setText(QString());
        pushButton_backToHome_3->setText(QApplication::translate("MainWindow", "Back to Team Page", nullptr));
        label_Logo->setText(QString());
        label_teamNameHeader->setText(QApplication::translate("MainWindow", "Los Angeles Lakers", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_yearJoined->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_yearJoined->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_Conference->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_Conference->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_location->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_location->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_Coach->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_Coach->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_stadiumName->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_stadiumName->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_seatingCap->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_seatingCap->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_Division->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_Division->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_6->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_6->setText(QApplication::translate("MainWindow", "Conference:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("MainWindow", "Location:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_9->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_9->setText(QApplication::translate("MainWindow", "Division:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_8->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("MainWindow", "Year Joined:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_5->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_5->setText(QApplication::translate("MainWindow", "Stadium Name:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_10->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_10->setText(QApplication::translate("MainWindow", "Coach:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_4->setAccessibleName(QApplication::translate("MainWindow", "stadiumData", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("MainWindow", "Seating Capacity:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground_3->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground_3->setText(QString());
        label_teamNameHeader_2->setText(QApplication::translate("MainWindow", "Los Angeles Angels", nullptr));
        pushButton_backToHome_7->setText(QApplication::translate("MainWindow", "Back to Team Page", nullptr));
        label_teamSouvenirsHeader->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        label_singleTeamSouvBackground->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground_11->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground_11->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground_12->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground_12->setText(QString());
        pushButton_backToHome_2->setText(QApplication::translate("MainWindow", "Back to Home Page", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_seatingCap->setText(QApplication::translate("MainWindow", "Seating Capacity", nullptr));
        radioButton_sortYearJoined->setText(QApplication::translate("MainWindow", "Year Joined", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Sort By", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Filter By", nullptr));
        radioButton_EasternFilter->setText(QApplication::translate("MainWindow", "Eastern", nullptr));
        radioButton_WesternFilter->setText(QApplication::translate("MainWindow", "Western", nullptr));
        radioButton_southEastFilter->setText(QApplication::translate("MainWindow", "South East ", nullptr));
        radioButton_southWestFilter->setText(QApplication::translate("MainWindow", "South West", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Conference", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Division", nullptr));
        radioButton_sortStadiumName->setText(QApplication::translate("MainWindow", "Stadium Name", nullptr));
        radioButton_sortTeamName->setText(QApplication::translate("MainWindow", "Team Name", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Other", nullptr));
        radioButton_coachFilter->setText(QApplication::translate("MainWindow", "Coach", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_extraInfo->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_extraInfo->setText(QApplication::translate("MainWindow", "Extra INFO", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_toViewSingleTeamPage->setAccessibleName(QApplication::translate("MainWindow", "redButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_toViewSingleTeamPage->setText(QApplication::translate("MainWindow", "Stadium Info", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground_2->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground_2->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        pushButton_toViewSouvenirsPage->setAccessibleName(QApplication::translate("MainWindow", "redButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_toViewSouvenirsPage->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Select Your Starting Point", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Select all teams you would like to visit:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_StartCustomTrip->setAccessibleName(QApplication::translate("MainWindow", "redButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_StartCustomTrip->setText(QApplication::translate("MainWindow", "Start Trip", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_AddCustomStop->setAccessibleName(QApplication::translate("MainWindow", "redButton", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton_AddCustomStop->setText(QApplication::translate("MainWindow", "Add Stop", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_TransparentBackground_10->setAccessibleName(QApplication::translate("MainWindow", "transparentBar", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_TransparentBackground_10->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_customTripHeader_4->setAccessibleName(QApplication::translate("MainWindow", "darkText", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_customTripHeader_4->setText(QApplication::translate("MainWindow", "Custom Trip Planner", nullptr));
        checkBox_takeFastestRoute->setText(QApplication::translate("MainWindow", "Take Fastest Route ", nullptr));
        label_tripStopHeader->setText(QString());
        pushButton_backToHome->setText(QApplication::translate("MainWindow", "Home Page", nullptr));
        pushButton_backToHome_6->setText(QApplication::translate("MainWindow", "Back To Planner", nullptr));
        pushButton_NBALogoHome->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        label_NavPageTitleHeader->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_NavPageTitleHeader->setText(QApplication::translate("MainWindow", "NBA Trip Planner", nullptr));
        pushButton_ToAdminLoginPage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
