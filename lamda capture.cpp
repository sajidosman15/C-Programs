#include<iostream>
using namespace std;


int main()
{
    int one=1;
    int two=2;
    int three=3;

    //sending local variable
    [one,two](){
        cout<<one<<" , "<<two<<endl;
    }();

    //sending reference that can be edit
    [one,&two](){
        two=7;
        cout<<one<<" , "<<two<<endl;
    }();

    //sending all variable at once
    [=](){
        cout<<one<<" , "<<two<<endl;
    }();

    //sending all reference

    [&](){
        one=3;
        cout<<one<<" , "<<two<<endl;
    }();
}
