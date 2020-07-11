#include<iostream>
using namespace std;
void exchange(int &p ,int &q )
{

    int i;
    i=p;
    p=q;
    q=i;
}
int main()
{

int x=6,y=7;
exchange(x,y);
cout<<x<<endl<<y;
return 0;
}
