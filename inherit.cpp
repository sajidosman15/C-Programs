#include<iostream>
using namespace std;

class person
{
public:
    int age;
    void display()
    {
        cout<<age<<endl;
    }

};

class student : public person
{
    public:
    int id;
    void display2()
    {
        display();
        cout<<id;
    }
};

int main()
{
    student a;
    a.id=10;
    a.age=25;
    a.display2();
}
