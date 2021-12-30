#include<iostream>
#include<fstream>
using namespace std;

#pragma pack(push,1)
struct person{
char name[50];
int age;
double salary;
};
#pragma pack(pop)

int main()
{
    person sajid{"Sajid",21,3400.60};

    ofstream file;
    file.open("Sajid.txt",ios::binary);
    file.write((char*)&sajid,sizeof(person));
    file.close();

    person dj;
    ifstream file1;
    file1.open("Sajid.txt",ios::binary);
    file1.read((char*)&dj,sizeof(person));
    file1.close();
    cout<<dj.name<<endl;
    cout<<dj.age<<endl;
    cout<<dj.salary<<endl;

}
