#include<iostream>
using namespace std;

template <class a>

a add(a b,a c)
{
    return b+c;
}

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.6,20.7);
}
