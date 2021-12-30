#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;

    file.open("Sajid.txt");

    while(file){
        string nam;
        getline(file,nam,':');
        int num;
        file>>num;
        file>>ws;
        if(!file){
            break;
        }
        cout<<nam<<" -- "<<num<<endl;

    }
    file.close();
}
