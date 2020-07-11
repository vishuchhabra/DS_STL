#include<iostream>
using namespace std;
int sum(int *p,int *q)
{
    int h=*p+*q;
return h;
}
void swap(int *p,int *q)
{

    int x=*p;
    *p=*q;
    *q=x;
}
void swap1(int &x,int& y)
{

    int g;
    g=x;
    x=y;
    y=g;
}
int main()
{

    int x,y;
    cin>>x>>y;
    swap1(x,y);
    cout<<x<<endl<<y<<endl;
    cout<<endl<<sum(&x,&y)<<endl;
    return 0;
    }
