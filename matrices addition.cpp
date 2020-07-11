#include<iostream>
using namespace std;
int main()
{

    int **p;
    p=new int *[3];
    for(int i=0;i<3;i++)
        p[i]=new int [3];
    for(int j=0;j<3;j++)
        for(int k=0;k<3;k++)
        cin>>p[j][k];
     for(int j=0;j<3;j++)
     {
        for(int k=0;k<3;k++)
        cout<<p[j][k]<<" ";
        cout<<endl;
     }
}
