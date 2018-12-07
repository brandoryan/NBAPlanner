#ifndef TRIP_H
#define TRIP_H

#include "databasemanager.h"
#include "graph.h"

class Trip
{
    public:
        Trip();

        // What will be called form mainWindow Page to get the shortest trip path
        // void getTripStops(???) -> should fill vector with names of stadiums in order of trip and set totalDistance using dikstras

        // Returns name of next stadium being stopped at or the string 'end' to signal trip has ended
        STRING getNextStop();

        // Starts Trip traversals which set the tripStops
        void startDFSTrip(STRING startLocation);
        void startBFSTrip(STRING startLocation);
        void planShortestPathDijkstra(STRING startLocation);
        void setShortestPathDijkstra(STRING destinationStadium);
        void startMST();
        void startCustomOrder();
        void startFastestCustom(STRING startLocation);
       // Returns total total distance of trip
        double getTotalDistance() const;

        // Might use this.. not sure
        void addNewCustomStop(STRING stadiumName);

        // Returns map of MST
        unordered_map<string, pair<int, string> > getMST();

private:
        double    totalDistance; // total distance of trip
        strVECTOR tripStops;     // Vector holds names of stadiums being visited in the order they are visted

        STRING    customStartStadium;
        strVECTOR customStops;

        DatabaseManager *db;
        Graph            stadiums;

        // clears data from previous trip
        void clearLastTrip();

        void setCustomTripDistance();
};

#endif // TRIP_H
