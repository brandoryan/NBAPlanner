#include "map.h"
#include "ui_map.h"
#include <QPainter>

map::map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);



    // Displaying the map of the US with all the schools
    QString filename = ":/map.png";
    QPixmap pix;
    ui->label->setAlignment(Qt::AlignCenter);


    // Loading the image of the map
    if(pix.load(filename)){
        // Scale pixmap to fit in label'size and keep ratio of pixmap
        pix = pix.scaled(ui->label->size(),Qt::KeepAspectRatio);
        ui->label->setPixmap(pix);
    }
}

map::~map()
{
    delete ui;
}
