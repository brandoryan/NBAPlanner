#ifndef TEAMSMODEL_H
#define TEAMSMODEL_H


#include "model.h"

class TeamsModel: public Model
{
public:
    TeamsModel();
    ~TeamsModel();

    QStringList getTeamNames();

    // Refreshes modesl when DB changes
    void refreshModel();
private:
    QStringList teamNames;
    void        setTeamNames();
};

#endif // TEAMSMODEL_H
