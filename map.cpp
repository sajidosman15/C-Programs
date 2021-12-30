#include<iostream>
#include<map>
using namespace std;

class person
{
    private:
    string name;
    int age;

    public:
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    person()
    {

    }

    void print()
    {
        cout<<name<<"  "<<age<<endl;
    }
};

int main()
{
    map<int, person> per;

    per[0]=person("sajid",18);
    per[1]=person("Asif",21);
    per[9]=person("nafis",38);
    per[3]=person("araf",28);

    per.insert(make_pair(4,person("Baltu",23)));

    for(map<int,person>::iterator it=per.begin();it !=per.end();it++){
        cout<<it->first<<":";
        it->second.print();
    }
}







