#include<iostream>
#include<set>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    person()
    {
    }
    person(string name,int age)
        :name(name),age(age)
    {

    }

    void print() const
    {
        cout<<name<<"  "<<age<<endl;
    }

    bool operator<(const person &others)const
    {
        if(name!=others.name)
        {
            return name<others.name;
        }
        else
        {
            return age<others.age;
        }
    }
};

int main()
{
//    set<int> num;
//    num.insert(10);
//    num.insert(20);
//    num.insert(30);
//    num.insert(40);
//
//    if(num.count(70)){
//        cout<<"Found"<<endl;
//    }else{
//        cout<<"Not Found"<<endl;
//    }
//
//    for(set<int>::iterator it=num.begin();it!=num.end();it++){
//        cout<<*it<<endl;
//    }

    set<person> per;

    per.insert(person("sajid",1));
    per.insert(person("asif",2));
    per.insert(person("kader",3));
    per.insert(person("rafa",4));

    for(set<person>::iterator it=per.begin(); it!=per.end(); it++)
    {
        it->print();
    }

}
