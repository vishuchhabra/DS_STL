#include<iostream>
using namespace  std;
int fact(int n)
{

    if(n>1)
    {
    return n*fact(n-1);
    }
}
int main()
{

cout<<"enter the number whose factorial  you want to  find"<<endl;
int n;
cin>>n;
cout<<"factorial is following as"<<endl<<fact(n);


}
