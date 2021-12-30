#include<iostream>
using namespace std;

void div(double (*add)(double a,double b))
{
    auto sum=add(8,4);
    cout<<sum<<endl;
}
int main()
{
    auto add=[](double a,double b)->double{

        if(b==0){
            return 0;
        }

        return a/b;
    };

    div(add);
}
