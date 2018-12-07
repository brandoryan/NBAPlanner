#include "distances.h"

distances::distances()
{
    start = "default";
    finish = "default";
    distance = -999;
}
distances::distances(QString s, QString f, int d)
{
    start = s;
    finish = f;
    distance = d;
}
QString distances::getStart() const
{
    return start;
}
QString distances::getFinish() const
{
    return finish;
}
int distances::GetDistance() const
{
    return distance;
}
