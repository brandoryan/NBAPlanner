#ifndef DISTANCES_H
#define DISTANCES_H

#include <QString>
#include <QDebug>

class distances
{
public:
    distances();
    distances(QString s, QString f, int d);
    QString getStart() const;
    QString getFinish() const;
    int GetDistance() const;
private:
    QString start;
    QString finish;
    int distance;
};

#endif // DISTANCES_H
