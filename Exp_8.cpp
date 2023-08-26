#include<iostream>
using namespace std;
int main()
{
    int mat[3][2],i,j;
    cout<<"enter the values in the matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"the given matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
} 


    
