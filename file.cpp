#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    string n;
    file.open("Sajid.txt",ios::out|ios::app);
    getline(cin,n);
    file<<n;

    file.close();
}
