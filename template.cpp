#include<iostream>
using namespace std;

template<class T>
class data
{
private:
    T obj;
public:
    data(T obj)
    {
        this->obj=obj;
    }

    void print()
    {
        cout<<obj<<endl;
    }
};

int main()
{
    data<int> a(10);
    a.print();
}
