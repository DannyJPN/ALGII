#include "Vertex.hpp"
#include <iostream>

using namespace std;

Vertex::Vertex(int id,int load)
{
    ID=id;
    data=load;
    siblingcountmax=5;
    next=prev=nullptr;
    siblings = new Vertex*[siblingcountmax];
    for(int i = 0;i<siblingcountmax;i++)
    {
        siblings[i]=nullptr;
    }

}
Vertex::~Vertex()
{
    delete[] siblings;

}

void Vertex::InsertSibling(Vertex * v)
{
    int i = 0;
    while(i<siblingcountmax&&siblings[i]!=nullptr)
    {
        i++;
    };
    if(i<siblingcountmax)
       {

    siblings[i]=v;
        return;
       }
    cout<<"Not enough space"<<endl;
return;
}
