#include "BSTree.hpp"
#include <iostream>

using namespace std;

BSTree::Node::Node(int k)
{
    key=k;
}

void BSTree::Insert(int key)
{
    Insert(key,root);


}



void BSTree::Insert(int key,Node*& root)
{
    if(root==nullptr)
    {
        root = new Node(key);
        return;
    }
    if(root->key==key)
    {
        return;
    }
    if(root->key>key)
    {
        Insert(key,root->left);
        return;
    }
    if(root->key<key)
    {
        Insert(key,root->right);
        return;
    }


}



        void BSTree::PrintSorted(bool sorting)
        {
            PrintSorted(sorting,root);
        }
        void BSTree::PrintSorted(bool sorting,Node*root)
        {
            if(root==nullptr)
            {
                return;
            }
            PrintSorted(sorting,sorting?root->left:root->right);
            cout<<root->key<<endl;
            PrintSorted(sorting,sorting?root->right:root->left);



        }
