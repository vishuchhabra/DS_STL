#include<iostream>
using namespace  std;
void  all(char **d)
{

    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
    cout<<endl<<d[i][j];
}
int main()
{

   char **h;
   h=new char*[2];
   for(int p=0;p<2;p++)
    h[p]=new char[3];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
    cin>>h[i][j];
   all(h);
}
