#include<iostream>
using namespace std;

class person
{
private:
    int age;
    string name;

public:
    person(int age,string name)
        :age(age),name(name)
    {

    }

    person()
    {
    }

    void print()
    {
        cout<<name<<"  "<<age<<endl;
    }

//    const person &operator=(const person &obj){
//        cout<<"operator calling"<<endl;
//        return *this;
//    }

    bool operator==(const person &obj)const
    {
        if(name==obj.name&&age==obj.age){
            return true;
        }
    }

     friend ostream &operator<<(ostream &out,const person &obj)
    {
        out <<obj.age <<" : "<<obj.name;
        return out;
    }

};

int main()
{
    person per1(18,"Sajid");

    person per2(28,"Sajid");

    //per2.operator=(per1);
    //per2=per1;

    if(per1==per2)
    {
        cout<<"Same"<<endl;
    }

    cout<<per1<<endl;

    //per2.print();
}
