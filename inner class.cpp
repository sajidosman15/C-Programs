#include<iostream>
using namespace std;

class parent{
public:
    class child;

};

class parent::child{

public:
void run()
{
    cout<<"Running"<<endl;
}
};

int main()
{
    parent::child obj;
    obj.run();
}
