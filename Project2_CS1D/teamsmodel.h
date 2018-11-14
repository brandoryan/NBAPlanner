#ifndef TEAMSMODEL_H
#define TEAMSMODEL_H


#include "model.h"

class TeamsModel: public Model
{
    public:
        TeamsModel();
        ~TeamsModel();

        // Refreshes modesl when DB changes
        void refreshModel();
    private:


    };

#endif // TEAMSMODEL_H
