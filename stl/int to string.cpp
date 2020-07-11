//duniya te essi koi seh nhi jo teri perri dhari nhi ja sakdi
#include<iostream>
#include<string>
#include<iostream>

using namespace std;
char* mychar(int n)
{
int fac=1;
for(int k=n;k>1;k--)
{

    fac=fac*k;
}

int co=0,h=fac;
while(h>0)
{
    co++;
    h=h/10;
}
int val;
char *p=new char[co];
for(int i=co-1;i>=0;i--)
{
    val=fac%10;
    fac=fac/10;
    p[i]=val+'0';

}

return p;
}
int main()
{

cout<<mychar(6);

    cout<<endl;
}
