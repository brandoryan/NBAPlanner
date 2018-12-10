#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

class Edge
{
    public:
        /*****************************************************************
        *		     CONSTRUCTORS & DESTRUCTOR
        *****************************************************************/
        Edge();
        Edge(Vertex* source, double weight);
        ~Edge();

        bool operator<(const Edge& otherEdge) const;
        bool operator>(const Edge& otherEdge) const;
        /*****************************************************************
        *					MUTATORS
        *****************************************************************/
        void setDestination(Vertex *destination);
        void setSource(Vertex *source);
        void setWeight(double weight);
        void setDiscoveryEdge(bool discoveryEdge);

        /*****************************************************************
         *					ACCESSORS
         *****************************************************************/
        Vertex* getDestination();
        Vertex* getSource()       const;
        double  getWeight()       const;
        bool    isDiscoveryEdge() const;

    private:
        Vertex* destination;
        Vertex* source;
        double  weight;
        bool    discoveryEdge;

};

#endif // EDGE_H
