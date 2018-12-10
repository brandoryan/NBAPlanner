#include "trip.h"

Trip::Trip()
{
    db = DatabaseManager::getInstance();
}

/**
 * @brief Trip::getNextStop
 * Returns the next incoming stadium in the trip path.
 * @return the name of the next stadium
 */
STRING Trip::getNextStop()
{
    STRING nameOfStop;

    if(!tripStops.empty())
    {
        nameOfStop = tripStops.at(0);
        tripStops.remove(0);
    }
    else
        nameOfStop = "end";

    return nameOfStop;
}

/**
 * @brief Trip::startDFSTrip
 * @param startLocation
 */
void Trip::startDFSTrip(STRING startLocation)
{
    Vertex *startStadium = stadiums.getVertex(startLocation.toUtf8().constData());
    stadiums.DFS(startStadium);
    totalDistance = stadiums.getTotalDistance();
    qDebug() << (stadiums.path.size());
    //WHILE - adds stadiums to visit to tripStops
    while (!stadiums.path.empty())
    {
        qDebug() << (stadiums.path.size());
        qDebug() << (QString::fromStdString(stadiums.path.front()->getName()));
        tripStops.push_back(QString::fromStdString(stadiums.path.front()->getName()));
        stadiums.path.pop();
    }
}

/**
 * @brief Trip::startBFSTrip
 * @param startLocation
 */
void Trip::startBFSTrip(STRING startLocation)
{
    Vertex *startStadium = stadiums.getVertex(startLocation.toUtf8().constData());
    stadiums.BFS(startStadium);
    totalDistance = stadiums.getTotalDistance();
    //WHILE - adds stadiums to visit to tripStops
    while (!stadiums.path.empty())
    {
        qDebug() << (stadiums.path.size());
        qDebug() << (QString::fromStdString(stadiums.path.front()->getName()));
        tripStops.push_back(QString::fromStdString(stadiums.path.front()->getName()));
        stadiums.path.pop();
    }
}

/**
 * @brief Trip::startMST
 */
void Trip::startMST()
{
    STRING startLocation = "Los Angeles Lakers";
    Vertex *startStadium = stadiums.getVertex(startLocation.toUtf8().constData());
    stadiums.MST(startStadium);
    totalDistance = stadiums.getTotalDistance();
}

void Trip::startCustomOrder()
{
    tripStops.clear();
    tripStops.push_back(customStops.at(customStops.size()-1));
    customStops.removeLast();
    for(int i = 0; i < customStops.size(); i ++)
    {
        tripStops.push_back(customStops.at(i));
    }
    setCustomTripDistance();
    customStops.clear();
}

void Trip::startFastestCustom(STRING startLocation)
{
    Vertex *currentStart = stadiums.getVertex(startLocation.toUtf8().constData());
    Vertex *closestStopVertex;
    totalDistance = 0;
    tripStops.clear();
    tripStops.push_back(startLocation);

    //WHILE - destinations still exist
    while(!customStops.empty())
    {
        //retrieves name of closest destination from startLocation
        STRING closestStop = stadiums.getClosestVertex(currentStart, customStops);
        Q_ASSERT(closestStop != "");
        closestStopVertex = stadiums.getVertex(closestStop.toUtf8().constData());
        currentStart = closestStopVertex;

        //adds distance from startLocation to closestStopVertex
        totalDistance += stadiums.getShortestDistance(closestStopVertex);

        //adds destination to locations to visit
        tripStops.push_back(closestStop);
        customStops.remove(customStops.indexOf(closestStop));
    }
}

void Trip::setCustomTripDistance()
{
    QString currentStop;
    QString nextStop;
    Vertex *currentStopVertex;
    Vertex *nextStopVertex;
    for(int i = 0; i < tripStops.size() -1 ; i ++)
    {
        currentStop = tripStops.at(i);
        nextStop    = tripStops.at(i+1);
        currentStopVertex = stadiums.getVertex(currentStop.toUtf8().constData());
        nextStopVertex    = stadiums.getVertex(nextStop.toUtf8().constData());

        stadiums.Dijkstra(currentStopVertex);
        totalDistance += stadiums.getShortestDistance(nextStopVertex);
    }
}

/**
 * @brief Trip::planShortestPathDijkstra
 * @param startLocation
 */
void Trip::planShortestPathDijkstra(STRING startLocation)
{
    Vertex *startStadium = stadiums.getVertex(startLocation.toUtf8().constData());
    stadiums.Dijkstra(startStadium);
}

/**
 * @brief Trip::setShortestPathDijkstra
 * @param destinationStadium
 */
void Trip::setShortestPathDijkstra(STRING destinationStadium)
{
    Vertex *destinationStadiumV = stadiums.getVertex(destinationStadium.toUtf8().constData());
    totalDistance = stadiums.getShortestDistance(destinationStadiumV);
    tripStops.push_back("Pepsi Center");
    tripStops.push_back(destinationStadium);
    qDebug() << "TOTAL DISTANCE: " << totalDistance << endl;
}


/**
 * @brief Trip::getMST
 * @return
 */
unordered_map<string, pair<int, string>> Trip::getMST()
{
    STRING startLocation = "Los Angeles Lakers";
    Vertex *startStadium = stadiums.getVertex(startLocation.toUtf8().constData());
    stadiums.MST(startStadium);
    return stadiums.getMST();
}

double Trip::getTotalDistance() const
{
    return totalDistance;
}

void Trip::addNewCustomStop(STRING stadiumName)
{
    customStops.push_back(stadiumName);
}


void Trip::clearLastTrip()
{
    totalDistance = 0;
    tripStops.clear();
}
