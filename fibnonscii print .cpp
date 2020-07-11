#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==2)
        return 1;
    else if(n==1)
    return 0;

    else
        return(fib(n-1)+fib(n-2));
}
int main()
{
    cout<<"enter no.of terms"<<endl;
    int n;
    cin>>n;
    cout<<"terms are following as:"<<endl;
    for(int i=1;i<=n;i++)
    cout<<fib(i)<<" ";
    return 0;
}
