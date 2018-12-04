#ifndef TEAMSMODEL_H
#define TEAMSMODEL_H


#include "model.h"

class TeamsModel: public Model
{
public:
    TeamsModel();
    ~TeamsModel();

    void updateTeam(const STRING stadiumName, const STRING location, const int seatCap);

    QStringList getTeamNames();
    int         getSeatingCapTotal() const;

    // Refreshes modesl when DB changes
    void refreshModel();
private:
    QStringList teamNames;
    int         seatingCapTotal;
    void        setTeamNames();
};

#endif // TEAMSMODEL_H
