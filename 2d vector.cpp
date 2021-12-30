#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> > num(5,vector<int>(4,7));

    for(int i=0;i<num.size();i++){
        for(int j=0;j<num[i].size();j++){
            cout<<num[i][j]<<flush;
        }
        cout<<endl;
    }
}
