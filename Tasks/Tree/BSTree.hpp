#ifndef TREE
#define TREE

class BSTree
{
    private:
        class Node
        {
        public:
            int key;
            Node*left=nullptr,*right=nullptr;

        Node(int k);

        };
        Node* root=nullptr;
        void Insert(int key,Node*& r);
    public:
        void Insert(int key);
        void PrintSorted(bool sorting);
        void PrintSorted(bool sorting,Node*root);

};
#endif // TREE
