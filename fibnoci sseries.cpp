#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1||n==2)
        return 1;
    if(n>=3)
        return (fib(n-1)+fib(n-2));

}
int main()
{

    int no;
    cout<<"enter the indexing  whose for  that fibonacci series value  you want to find:-"<<endl;
    cin>>no;
    cout<<"your fibonacci number is following  as:-"<<"  "<<fib(no);
}
