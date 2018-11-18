#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

signals:
    void LogoutButtonClicked();

private slots:
    void on_teamsByTeamName_clicked();
    void on_coachesAndTeamsByTeamName_clicked();
    void on_arenasAndTeamsBySeatingCapacity_clicked();
    void on_teamsByArenaName_clicked();
    void on_easternTeamsByTeamName_clicked();
    void on_teamAndArenaNamesByAscendingYearJoined_clicked();
    void on_southeastDivisionEasternTeamsByTeamName_clicked();
    void on_allInformation_clicked();
    void on_logoutButton_clicked();



private:
    Ui::admin *ui;
};

#endif // ADMIN_H
