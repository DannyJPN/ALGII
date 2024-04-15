#include "Graph.hpp"

void Graph::Insert(Vertex *v)
{
    if(!vertices.findItem(v->GetID()))
    {
        vertices.insertItem(v);
    }

}

void Graph::Insert(Vertex *v,int* sibl,int count)
{

Insert(v);

    for(int i = 0;i<count;i++)
    {
        Vertex* sib =vertices.findItem(sibl[i]);

        if(!sib)
        {
            v->InsertSibling(sib);
           if(v!=sib)
           {
               sib->InsertSibling(v);
           }
        }
    }

}
