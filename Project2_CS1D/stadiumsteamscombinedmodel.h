#ifndef STADIUMSTEAMSCOMBINEDMODEL_H
#define STADIUMSTEAMSCOMBINEDMODEL_H

#include "model.h"
class stadiumsTeamsCombinedModel: public Model
{
    public:
        stadiumsTeamsCombinedModel();
        ~stadiumsTeamsCombinedModel();
        int getSeatingCapTotal() const;

private:
        int  seatingCapTotal;
        void refreshModel();
};

#endif // STADIUMSTEAMSCOMBINEDMODEL_H
