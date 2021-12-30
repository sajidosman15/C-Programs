#include<iostream>
#include<exception>
using namespace std;


int main()
{
    try{
    //char *a=new char[9999999999999];
    int a=10/0;
    }
    catch(exception &e){
    cout<<e.what();
    }
}
