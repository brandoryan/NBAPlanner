#ifndef SOUVENIRSMODEL_H
#define SOUVENIRSMODEL_H

#include "model.h"

class SouvenirsModel: public Model
{
    public:
        SouvenirsModel();
        ~SouvenirsModel();

        // add, update, delete
        void addSouvenir(STRING itemName, double itemPrice, STRING stadium);
        void updateSouvenir(STRING itemName, double itemPrice, STRING stadium);
        void deleteSouvenir(STRING itemName, double itemPrice, STRING stadium);

        // Refreshes modesl when DB changes
        void refreshModel();

};

#endif // SOUVENIRSMODEL_H
