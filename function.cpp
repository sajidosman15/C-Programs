#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int i,a,b;
    for (i=0;i<10;i++){
        cout<<"Enter First number : ";
        cin>>a;
        cout<<"Enter Second number : ";
        cin>>b;
        cout<<a <<" + " <<b <<" = " <<sum(a,b) <<endl;
    }
}
