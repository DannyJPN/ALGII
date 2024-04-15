#include <iostream>
#include "Graph.hpp"
using namespace std;

int main()
{
    Graph g;

    Vertex* v1 = new Vertex(1,3);
    Vertex* v2 = new Vertex(3,4);
    Vertex* v3 = new Vertex(2,5);
    Vertex* v4 = new Vertex(4,3);
    Vertex* v5 = new Vertex(1,0);

    g.Insert(v1);
    g.Insert(v2);

    int* siblings = new int[4];
    siblings[0]=1;
    siblings[1]=2;

    g.Insert(v3,siblings,2);

    siblings[0]=3;

    g.Insert(v4,siblings,1);

    siblings[0]=3;
    siblings[1]=2;

    g.Insert(v5,siblings,2);

    return 0;
}
