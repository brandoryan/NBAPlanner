#include "vertex.h"

Vertex::Vertex()
{}

Vertex::Vertex(const string &name) : name(name)
{
    beenVisited = false;
}

Vertex::~Vertex()
{}

bool Vertex::operator==(const Vertex &otherVertex) const
{
    return name == otherVertex.name;
}
/******************************************************************************
 *					         MUTATORS
 ******************************************************************************/
void Vertex::setName(const string &name)
{
    this->name = name;
}

void Vertex::setBeenVisited(bool beenVisited)
{
    this->beenVisited = beenVisited;
}

/******************************************************************************
 *					         ACCESSORS
 ******************************************************************************/
const string &Vertex::getName() const
{
    return name;
}

bool Vertex::hasBeenVisited() const
{
    return beenVisited;
}
