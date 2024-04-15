#ifndef VECTOR
#define VECTOR

class Vertex
{
    private:
        int ID;
        int data;
        int siblingcountmax;
        Vertex*next,*prev;
        Vertex**siblings;
    public:
        Vertex(int one,int two);
        ~Vertex(void);
        void SetID(int ID);
        int GetID(void);
        void SetNext(Vertex* next);
        Vertex* GetNext(void);
        void SetPrev(Vertex* prev);
        Vertex* GetPrev(void);
        void InsertSibling(Vertex * v);

};

#endif // VECTOR

