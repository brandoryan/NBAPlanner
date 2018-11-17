#ifndef FAN_H
#define FAN_H

#include <QDialog>
#include "tripselection.h"

namespace Ui {
class fan;
}

class fan : public QDialog
{
    Q_OBJECT

public:
    explicit fan(QWidget *parent = nullptr);
    tripSelection tripSelectionMenu;
    ~fan();

signals:
    void LogoutButtonClicked();

private slots:
    void on_createTripButton_clicked();
    void on_logoutButton_clicked();
    void on_BackButton_clicked();

private:
    Ui::fan *ui;
};

#endif // FAN_H
