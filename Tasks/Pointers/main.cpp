#include <iostream>

using namespace std;

void Refer(int*&);

int main()
{
    int* x = nullptr;
    cout<< &x <<":"<<x<<endl;
    Refer(x);
    cout<< &x <<":"<<x<<endl;



//int*const& a ; //refer to const pointer
int *& const a;









    return 0;
}

void Refer(int*& x)
{

    cout<< &x <<":"<<x<<endl;
}
