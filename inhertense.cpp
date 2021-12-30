#include<iostream>
using namespace std;

class parent{
public:
    int age;

    virtual void print()
    {
        cout<<"parent"<<endl;
    }

};

class child:public parent{
public:
    int age;
    int id;

    void print()
    {
        cout<<"child"<<endl;
    }

};

int main()
{
    child c1;
    parent &p2=c1;
    p2.print();
}
