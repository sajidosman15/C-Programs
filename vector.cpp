#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> name(5);

    name[3]="asif";
    name[0]="nafis";

    name.push_back("sajid");
    name.push_back("osman");

//    for(int i=0;i<name.size();i++){
//        cout<<name[i]<<endl;
//    }

//    vector<string>::iterator it=name.begin();
//    cout<<*it<<endl;

    for(vector<string>::iterator i=name.begin();i != name.end();i++){
        cout<<*i<<endl;
    }
}
