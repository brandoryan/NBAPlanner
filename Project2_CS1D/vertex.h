#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>
using namespace std;
class Vertex
{
    public:
        /*****************************************************************
        *		     CONSTRUCTORS & DESTRUCTOR
        *****************************************************************/
        Vertex();
        Vertex(const string &name);
        ~Vertex();

        // Overloads operator to make Vertex comparable so it can be
        // used as key in map
        bool operator==(const Vertex &otherVertex) const;
        /*****************************************************************
        *					MUTATORS
        *****************************************************************/
        void setName(const string &name);
        void setBeenVisited(bool beenVisited);

        /*****************************************************************
         *					ACCESSORS
         *****************************************************************/
        const string &getName() const;
        bool hasBeenVisited() const;

    private:
        string name;
        bool   beenVisited;
};

namespace std {
    template<>
    struct hash<Vertex>
    {
        size_t operator()(const Vertex &k) const
        {
            // Compute individual hash values for two data members and combine them using XOR and bit shifting
            return ((hash<string>()(k.getName()) ^
                     (hash<bool>()(k.hasBeenVisited()) << 1)) >> 1);
        }
    };
}

#endif // VERTEX_H
