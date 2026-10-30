#include<iostream>
using namespace std;
int main()
{
     int i,j,matrix[3][3]={
            {1,2,3},
            {4,5,6},
            {7,8,9}
     };///declaration of array
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
return 0 ;
}

