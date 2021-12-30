#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool match(string test)
{
    return test.size()==3;
}

int counter(vector<string> &name,bool (*match)(string test))
{
    int total=0;
    for(int i=0;i<name.size();i++){
        if(match(name[i])){
            total++;
        }
    }
    return total;
}
int main()
{
    vector<string> name;

    name.push_back("one");
    name.push_back("two");
    name.push_back("three");
    name.push_back("four");
    name.push_back("one");

    cout<<match("one")<<endl;

    cout<<count_if(name.begin(),name.end(),match)<<endl;

    cout<<counter(name,match)<<endl;
}
