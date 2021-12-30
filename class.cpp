#include<iostream>
using namespace std;

class student
{
public:
    int id;
    string name;

    void display()
    {
        cout<<id <<"  " <<name <<endl;
    }
};

int main()
{
    student sajid;

    sajid.id=1;
    sajid.name="sajid";

    sajid.display();
}
