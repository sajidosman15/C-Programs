#include<iostream>
using namespace std;

void test(int a)
{
    cout<<a<<endl;
}

int main()
{
    void (*saj)(int)=test;

    saj(4);
}
