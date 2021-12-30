#include<iostream>
using namespace std;

class Test{
public:
    Test()=default;

    Test(int a)
    {
        cout<<"Hello"<<endl;
    }

};

void print(void (*func)())
{
    func();
}

int main()
{
    Test a(2);
    Test b;

    auto func=[](){
        cout<<"Lemda Calling"<<endl;
    };

    func();
    print(func);
}
