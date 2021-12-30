#include<iostream>
using namespace std;

int main()
{
    bool a=false;
    bool b=true;

    try
    {
        if(a)
        {
            throw "false";
        }
        if(b)
        {
            throw string("sajid");
        }

    }
    catch(char const *e)
    {
        cout<<e<<endl;
    }
    catch (string obj)
    {
        cout<<obj<<endl;
    }
}
