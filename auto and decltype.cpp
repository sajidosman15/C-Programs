#include<iostream>
using namespace std;

template<class A,class S>
auto test(A num,S num2) //->decltype(num+num2)
{
    return num+num2;
}

int get()
{
    return 999;
}

auto print()
{
    return get();
}

int main()
{
    auto num=10;
    cout<<num<<endl;
    cout<<print()<<endl;
    cout<<test(2,5)<<endl;
}
