#ifndef GRAPH
#define GRAPH

#include "Vertex.hpp"
#include "List.h"
class Graph
{
    private:
        List vertices;
    public:
        void Insert(Vertex*v);
        void Insert(Vertex*v,int*sibl,int count);


};

#endif // GRAPH
