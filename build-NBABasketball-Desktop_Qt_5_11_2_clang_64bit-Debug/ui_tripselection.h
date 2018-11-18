/********************************************************************************
** Form generated from reading UI file 'tripselection.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPSELECTION_H
#define UI_TRIPSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tripSelection
{
public:
    QPushButton *removeButton;
    QLabel *label;
    QPushButton *refreshButton;
    QPushButton *backButton;
    QListWidget *listWidget;
    QPushButton *beginTripButton;
    QLabel *label_4;
    QLineEdit *distanceDisplay;
    QLabel *label_3;
    QListWidget *listWidget_2;
    QPushButton *optimizeButton;
    QFrame *frame_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *customTrip;
    QRadioButton *allArena;
    QRadioButton *randomTrip;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *denverNuggets;
    QRadioButton *detroitPistons;
    QRadioButton *orlandoMagic;
    QRadioButton *laLakers;
    QPushButton *addButton;
    QLabel *label_2;
    QFrame *frame_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *dijkstrasAlgorithm;
    QRadioButton *aStarAlgorithm;
    QRadioButton *nextClosestAlgorithm;
    QRadioButton *minimumSpanningTreeAlgorithm;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *breadthFirstSearchAlgorithm;
    QRadioButton *kruskalsAlgorithm;
    QRadioButton *depthFirstSearchAlgorithm;
    QRadioButton *primsAlgorithm;
    QLabel *label_5;

    void setupUi(QDialog *tripSelection)
    {
        if (tripSelection->objectName().isEmpty())
            tripSelection->setObjectName(QStringLiteral("tripSelection"));
        tripSelection->resize(1022, 873);
        removeButton = new QPushButton(tripSelection);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(455, 400, 81, 61));
        QFont font;
        font.setPointSize(12);
        removeButton->setFont(font);
        removeButton->setAutoDefault(false);
        label = new QLabel(tripSelection);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 511, 71));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(15, 128, 255, 151));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(252, 1, 7, 128));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(128, 128, 128, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label->setPalette(palette);
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        refreshButton = new QPushButton(tripSelection);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(25, 220, 45, 31));
        refreshButton->setAutoDefault(false);
        backButton = new QPushButton(tripSelection);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(35, 570, 141, 71));
        backButton->setAutoDefault(false);
        listWidget = new QListWidget(tripSelection);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(25, 250, 421, 251));
        beginTripButton = new QPushButton(tripSelection);
        beginTripButton->setObjectName(QStringLiteral("beginTripButton"));
        beginTripButton->setGeometry(QRect(815, 570, 141, 71));
        beginTripButton->setAutoDefault(false);
        label_4 = new QLabel(tripSelection);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(155, 210, 150, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_4->setPalette(palette1);
        QFont font2;
        font2.setPointSize(15);
        label_4->setFont(font2);
        label_4->setAutoFillBackground(true);
        label_4->setFrameShape(QFrame::Panel);
        label_4->setAlignment(Qt::AlignCenter);
        distanceDisplay = new QLineEdit(tripSelection);
        distanceDisplay->setObjectName(QStringLiteral("distanceDisplay"));
        distanceDisplay->setGeometry(QRect(825, 537, 121, 21));
        distanceDisplay->setFont(font2);
        distanceDisplay->setReadOnly(true);
        label_3 = new QLabel(tripSelection);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(715, 210, 101, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_3->setPalette(palette2);
        label_3->setFont(font2);
        label_3->setAutoFillBackground(true);
        label_3->setFrameShape(QFrame::Panel);
        label_3->setAlignment(Qt::AlignCenter);
        listWidget_2 = new QListWidget(tripSelection);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(545, 250, 431, 251));
        optimizeButton = new QPushButton(tripSelection);
        optimizeButton->setObjectName(QStringLiteral("optimizeButton"));
        optimizeButton->setGeometry(QRect(895, 220, 81, 32));
        optimizeButton->setAutoDefault(false);
        frame_2 = new QFrame(tripSelection);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(300, 550, 391, 121));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        frame_2->setPalette(palette3);
        frame_2->setAutoFillBackground(true);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayoutWidget = new QWidget(frame_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 371, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        customTrip = new QRadioButton(horizontalLayoutWidget);
        customTrip->setObjectName(QStringLiteral("customTrip"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        customTrip->setPalette(palette4);
        QFont font3;
        font3.setPointSize(13);
        customTrip->setFont(font3);
        customTrip->setChecked(true);

        verticalLayout->addWidget(customTrip);

        allArena = new QRadioButton(horizontalLayoutWidget);
        allArena->setObjectName(QStringLiteral("allArena"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        allArena->setPalette(palette5);
        allArena->setFont(font3);

        verticalLayout->addWidget(allArena);

        randomTrip = new QRadioButton(horizontalLayoutWidget);
        randomTrip->setObjectName(QStringLiteral("randomTrip"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        randomTrip->setPalette(palette6);
        randomTrip->setFont(font3);

        verticalLayout->addWidget(randomTrip);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        denverNuggets = new QRadioButton(horizontalLayoutWidget);
        denverNuggets->setObjectName(QStringLiteral("denverNuggets"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        denverNuggets->setPalette(palette7);
        denverNuggets->setFont(font3);

        verticalLayout_2->addWidget(denverNuggets);

        detroitPistons = new QRadioButton(horizontalLayoutWidget);
        detroitPistons->setObjectName(QStringLiteral("detroitPistons"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        detroitPistons->setPalette(palette8);
        detroitPistons->setFont(font3);

        verticalLayout_2->addWidget(detroitPistons);

        orlandoMagic = new QRadioButton(horizontalLayoutWidget);
        orlandoMagic->setObjectName(QStringLiteral("orlandoMagic"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        orlandoMagic->setPalette(palette9);
        orlandoMagic->setFont(font3);
        orlandoMagic->setAutoExclusive(true);

        verticalLayout_2->addWidget(orlandoMagic);

        laLakers = new QRadioButton(horizontalLayoutWidget);
        laLakers->setObjectName(QStringLiteral("laLakers"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        laLakers->setPalette(palette10);
        laLakers->setFont(font3);

        verticalLayout_2->addWidget(laLakers);


        horizontalLayout->addLayout(verticalLayout_2);

        addButton = new QPushButton(tripSelection);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(455, 290, 81, 61));
        addButton->setFont(font);
        addButton->setAutoDefault(false);
        label_2 = new QLabel(tripSelection);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(840, 40, 141, 31));
        label_2->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(tripSelection);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(800, 80, 211, 101));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        frame_3->setPalette(palette11);
        frame_3->setAutoFillBackground(true);
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayoutWidget_2 = new QWidget(frame_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 191, 101));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        dijkstrasAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        dijkstrasAlgorithm->setObjectName(QStringLiteral("dijkstrasAlgorithm"));
        QPalette palette12;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        dijkstrasAlgorithm->setPalette(palette12);
        dijkstrasAlgorithm->setFont(font3);
        dijkstrasAlgorithm->setChecked(true);

        verticalLayout_3->addWidget(dijkstrasAlgorithm);

        aStarAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        aStarAlgorithm->setObjectName(QStringLiteral("aStarAlgorithm"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        aStarAlgorithm->setPalette(palette13);
        aStarAlgorithm->setFont(font3);

        verticalLayout_3->addWidget(aStarAlgorithm);

        nextClosestAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        nextClosestAlgorithm->setObjectName(QStringLiteral("nextClosestAlgorithm"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        nextClosestAlgorithm->setPalette(palette14);
        nextClosestAlgorithm->setFont(font3);
        nextClosestAlgorithm->setAutoExclusive(true);

        verticalLayout_3->addWidget(nextClosestAlgorithm);

        minimumSpanningTreeAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        minimumSpanningTreeAlgorithm->setObjectName(QStringLiteral("minimumSpanningTreeAlgorithm"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        minimumSpanningTreeAlgorithm->setPalette(palette15);
        minimumSpanningTreeAlgorithm->setFont(font3);

        verticalLayout_3->addWidget(minimumSpanningTreeAlgorithm);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        breadthFirstSearchAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        breadthFirstSearchAlgorithm->setObjectName(QStringLiteral("breadthFirstSearchAlgorithm"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        breadthFirstSearchAlgorithm->setPalette(palette16);
        breadthFirstSearchAlgorithm->setFont(font3);

        verticalLayout_4->addWidget(breadthFirstSearchAlgorithm);

        kruskalsAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        kruskalsAlgorithm->setObjectName(QStringLiteral("kruskalsAlgorithm"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        kruskalsAlgorithm->setPalette(palette17);
        kruskalsAlgorithm->setFont(font3);

        verticalLayout_4->addWidget(kruskalsAlgorithm);

        depthFirstSearchAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        depthFirstSearchAlgorithm->setObjectName(QStringLiteral("depthFirstSearchAlgorithm"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        depthFirstSearchAlgorithm->setPalette(palette18);
        depthFirstSearchAlgorithm->setFont(font3);

        verticalLayout_4->addWidget(depthFirstSearchAlgorithm);

        primsAlgorithm = new QRadioButton(horizontalLayoutWidget_2);
        primsAlgorithm->setObjectName(QStringLiteral("primsAlgorithm"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        primsAlgorithm->setPalette(palette19);
        primsAlgorithm->setFont(font3);

        verticalLayout_4->addWidget(primsAlgorithm);


        horizontalLayout_2->addLayout(verticalLayout_4);

        label_5 = new QLabel(tripSelection);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, 140, 171, 61));
        label_5->setFrameShape(QFrame::Box);
        label_5->setWordWrap(true);

        retranslateUi(tripSelection);

        QMetaObject::connectSlotsByName(tripSelection);
    } // setupUi

    void retranslateUi(QDialog *tripSelection)
    {
        tripSelection->setWindowTitle(QApplication::translate("tripSelection", "Trip Selection Menu", nullptr));
        removeButton->setText(QApplication::translate("tripSelection", "Remove", nullptr));
        label->setText(QApplication::translate("tripSelection", "Please Select the type of trip you would like to take and the Arenas you would like to go to", nullptr));
        refreshButton->setText(QString());
        backButton->setText(QApplication::translate("tripSelection", "Back", nullptr));
        beginTripButton->setText(QApplication::translate("tripSelection", "Begin Trip", nullptr));
        label_4->setText(QApplication::translate("tripSelection", "<html><head/><body><p><span style=\" color:#ffffff;\">Available Arenas</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("tripSelection", "<html><head/><body><p><span style=\" color:#ffffff;\">Itinerary</span></p></body></html>", nullptr));
        optimizeButton->setText(QApplication::translate("tripSelection", "Optimize", nullptr));
        customTrip->setText(QApplication::translate("tripSelection", "Custom Trip", nullptr));
        allArena->setText(QApplication::translate("tripSelection", "All-Arena Trip", nullptr));
        randomTrip->setText(QApplication::translate("tripSelection", "Random Trip", nullptr));
        denverNuggets->setText(QApplication::translate("tripSelection", "Denver Nuggets Trip", nullptr));
        detroitPistons->setText(QApplication::translate("tripSelection", "Detroit Pistons Trip", nullptr));
        orlandoMagic->setText(QApplication::translate("tripSelection", "Orlando Magic Trip", nullptr));
        laLakers->setText(QApplication::translate("tripSelection", "LA Lakers Trip", nullptr));
        addButton->setText(QApplication::translate("tripSelection", "Add", nullptr));
        label_2->setText(QApplication::translate("tripSelection", "Algorithm Options", nullptr));
        dijkstrasAlgorithm->setText(QApplication::translate("tripSelection", "Dijkstra's", nullptr));
        aStarAlgorithm->setText(QApplication::translate("tripSelection", "A*", nullptr));
        nextClosestAlgorithm->setText(QApplication::translate("tripSelection", "Next Closest", nullptr));
        minimumSpanningTreeAlgorithm->setText(QApplication::translate("tripSelection", "MST", nullptr));
        breadthFirstSearchAlgorithm->setText(QApplication::translate("tripSelection", "BFS", nullptr));
        kruskalsAlgorithm->setText(QApplication::translate("tripSelection", "Kruskal's", nullptr));
        depthFirstSearchAlgorithm->setText(QApplication::translate("tripSelection", "DFS", nullptr));
        primsAlgorithm->setText(QApplication::translate("tripSelection", "Prim's", nullptr));
        label_5->setText(QApplication::translate("tripSelection", "Double Click a Team to see all information regarding souvenirs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tripSelection: public Ui_tripSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPSELECTION_H
