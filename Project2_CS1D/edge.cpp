#include "edge.h"

/******************************************************************************
 *                  CONSTRUCTOR'S / DECONSTRUCTOR
 ******************************************************************************/
Edge::Edge()
{
    discoveryEdge = false;
}

Edge::Edge(Vertex *sourcef, double weightf)
{
    source = sourcef;
    weight = weightf;
}

Edge::~Edge()
{}

/******************************************************************************
 *                        OVERLOADS
 ******************************************************************************/
bool Edge::operator<(const Edge &otherEdge) const
{
    return this->weight < otherEdge.weight;
}

bool Edge::operator>(const Edge &otherEdge) const
{
    return this->weight > otherEdge.weight;
}


/******************************************************************************
 *					         MUTATORS
 ******************************************************************************/
void Edge::setDestination(Vertex *destination)
{
    this->destination = destination;
}

void Edge::setSource(Vertex *sourceF)
{
    source = sourceF;
}

void Edge::setWeight(double weight)
{
    this->weight = weight;
}

void Edge::setDiscoveryEdge(bool discoveryEdgeF)
{
    discoveryEdge = discoveryEdgeF;
}
/******************************************************************************
 *					         ACCESSORS
 ******************************************************************************/
Vertex *Edge::getDestination()
{
    return destination;
}

Vertex *Edge::getSource() const
{
    return source;
}

double Edge::getWeight() const
{
    return weight;
}

bool Edge::isDiscoveryEdge() const
{
    return discoveryEdge;
}
