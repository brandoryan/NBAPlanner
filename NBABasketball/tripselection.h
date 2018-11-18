#ifndef TRIPSELECTION_H
#define TRIPSELECTION_H

#include <QDialog>
#include "map.h"

namespace Ui {
class tripSelection;
}

class tripSelection : public QDialog
{
    Q_OBJECT

public:
    explicit tripSelection(QWidget *parent = nullptr);
    ~tripSelection();
    map mapMenu;

signals:
    void BackButtonClicked();

private slots:
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_backButton_clicked();
    void on_beginTripButton_clicked();
    void on_refreshButton_clicked();

private:
    Ui::tripSelection *ui;
};

#endif // TRIPSELECTION_H
