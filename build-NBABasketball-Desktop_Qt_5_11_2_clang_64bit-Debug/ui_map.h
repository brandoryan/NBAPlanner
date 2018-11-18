/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QTextEdit *textEdit;
    QListWidget *SouvenirList;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *schoolTotal;
    QLabel *label_4;
    QLabel *label;
    QPushButton *buyButton;
    QLineEdit *tripTotal;
    QSpinBox *spinBox;
    QPushButton *nextCampusButton;
    QLabel *label_2;

    void setupUi(QDialog *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName(QStringLiteral("map"));
        map->resize(1022, 873);
        textEdit = new QTextEdit(map);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(760, 30, 231, 51));
        textEdit->setReadOnly(true);
        SouvenirList = new QListWidget(map);
        SouvenirList->setObjectName(QStringLiteral("SouvenirList"));
        SouvenirList->setGeometry(QRect(760, 100, 231, 271));
        label_3 = new QLabel(map);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(790, 440, 81, 16));
        pushButton = new QPushButton(map);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(820, 540, 114, 32));
        pushButton->setAutoDefault(false);
        schoolTotal = new QLineEdit(map);
        schoolTotal->setObjectName(QStringLiteral("schoolTotal"));
        schoolTotal->setGeometry(QRect(890, 410, 81, 21));
        schoolTotal->setReadOnly(true);
        label_4 = new QLabel(map);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(790, 380, 59, 16));
        label = new QLabel(map);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 731, 491));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(3);
        label->setMidLineWidth(1);
        buyButton = new QPushButton(map);
        buyButton->setObjectName(QStringLiteral("buyButton"));
        buyButton->setGeometry(QRect(780, 470, 81, 51));
        buyButton->setAutoDefault(false);
        tripTotal = new QLineEdit(map);
        tripTotal->setObjectName(QStringLiteral("tripTotal"));
        tripTotal->setGeometry(QRect(890, 440, 81, 21));
        tripTotal->setReadOnly(true);
        spinBox = new QSpinBox(map);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(890, 380, 81, 22));
        spinBox->setReadOnly(true);
        spinBox->setMaximum(99);
        nextCampusButton = new QPushButton(map);
        nextCampusButton->setObjectName(QStringLiteral("nextCampusButton"));
        nextCampusButton->setGeometry(QRect(860, 470, 121, 51));
        nextCampusButton->setAutoDefault(false);
        label_2 = new QLabel(map);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(790, 410, 81, 16));

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QDialog *map)
    {
        map->setWindowTitle(QApplication::translate("map", "Dialog", nullptr));
        textEdit->setHtml(QApplication::translate("map", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Souvenirs at &lt;Insert arenaName&gt;</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("map", "Trip Total", nullptr));
        pushButton->setText(QApplication::translate("map", "Load Trip", nullptr));
        label_4->setText(QApplication::translate("map", "Amount", nullptr));
        label->setText(QApplication::translate("map", "TextLabel", nullptr));
        buyButton->setText(QApplication::translate("map", "Buy", nullptr));
        nextCampusButton->setText(QApplication::translate("map", "Next Arena", nullptr));
        label_2->setText(QApplication::translate("map", "Arena Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
