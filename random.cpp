#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    for(int i=0;i<10;i++){
    int ran = rand()%100+1;
    cout<<ran <<endl;
    }
}
