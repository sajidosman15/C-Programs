#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3],mat2[3][3],i,j;

    cout<<"Enter data into matrix 1:\n";
        for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat1[i][j];
        }
    }

    cout<<"Enter data into matrix 2:\n";
        for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>mat2[i][j];
        }
    }

    cout<<"Sum of matrix is\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<mat1[i][j]+mat2[i][j] <<"  ";
        }
        cout<<endl;
    }
}
