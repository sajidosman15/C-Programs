#include<iostream>
using namespace std;

class Test
{
private:
    int one{1};
    int two{2};

public:
    void run()
    {
        //int one{11};
        int two{22};

        auto lemda=[&,this](){
            cout<<one<<" , "<<two<<endl;
        };
        lemda();
    }
};

int main()
{
    Test test;
    test.run();
}
