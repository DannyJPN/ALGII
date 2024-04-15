#ifndef HASH
#define HASH
#include <vector>
#include <iostream>
using namespace std;
class HashTable
{
private:
    unsigned int c1=141,c2=213;

    vector<string*> table;
    unsigned int NearestSmallerPrime(unsigned int max);
    bool Find(vector<unsigned int> x,unsigned int s);

public:

    HashTable();
    HashTable(int size);
    ~HashTable();
    bool Insert(string s);
    bool Search(string s);
    int Count();
    double LoadFactor();
    void Report();


};

#endif // HASH


