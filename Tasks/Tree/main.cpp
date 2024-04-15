#include <iostream>
#include "BSTree.hpp"
using namespace std;

int main()
{
    BSTree tree;

    tree.Insert(15);
    tree.Insert(8);
    tree.Insert(18);
    tree.Insert(1);
    tree.Insert(5);
    tree.Insert(17);
    tree.Insert(133553281);

tree.PrintSorted(true);


    return 0;
}
