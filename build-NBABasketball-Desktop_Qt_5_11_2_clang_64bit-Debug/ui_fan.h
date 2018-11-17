/********************************************************************************
** Form generated from reading UI file 'fan.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAN_H
#define UI_FAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fan
{
public:
    QPushButton *logoutButton;
    QPushButton *viewArenaInfo;
    QLabel *label;
    QLabel *label_2;
    QPushButton *createTripButton;

    void setupUi(QDialog *fan)
    {
        if (fan->objectName().isEmpty())
            fan->setObjectName(QStringLiteral("fan"));
        fan->resize(1022, 873);
        logoutButton = new QPushButton(fan);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(410, 420, 191, 41));
        logoutButton->setAutoDefault(false);
        viewArenaInfo = new QPushButton(fan);
        viewArenaInfo->setObjectName(QStringLiteral("viewArenaInfo"));
        viewArenaInfo->setGeometry(QRect(410, 320, 191, 41));
        viewArenaInfo->setAutoDefault(false);
        label = new QLabel(fan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 80, 161, 20));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(fan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 150, 171, 16));
        createTripButton = new QPushButton(fan);
        createTripButton->setObjectName(QStringLiteral("createTripButton"));
        createTripButton->setGeometry(QRect(410, 260, 191, 41));
        createTripButton->setAutoDefault(false);

        retranslateUi(fan);

        QMetaObject::connectSlotsByName(fan);
    } // setupUi

    void retranslateUi(QDialog *fan)
    {
        fan->setWindowTitle(QApplication::translate("fan", "NBA Fan Menu", nullptr));
        logoutButton->setText(QApplication::translate("fan", "Logout", nullptr));
        viewArenaInfo->setText(QApplication::translate("fan", "View Arena Info", nullptr));
        label->setText(QApplication::translate("fan", "NBA Fan Menu", nullptr));
        label_2->setText(QApplication::translate("fan", "What would you like to do?", nullptr));
        createTripButton->setText(QApplication::translate("fan", "Create a Trip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fan: public Ui_fan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAN_H
