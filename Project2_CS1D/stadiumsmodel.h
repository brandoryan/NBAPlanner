#ifndef STADIUMSMODEL_H
#define STADIUMSMODEL_H

#include "model.h"

class StadiumsModel: public Model
{
    public:
        StadiumsModel();
        ~StadiumsModel();

        void updateStadium(STRING stadiumName, int seatCap);
        void updateStadiumName(STRING ogName, STRING newName);
        bool addExpansionTeams();

        // Refreshes modesl when DB changes
        void refreshModel();


        QStringList getStadiumNames() const;

private:

        QStringList stadiumNames;
        void setStadiumNames();
};

#endif // STADIUMSMODEL_H
