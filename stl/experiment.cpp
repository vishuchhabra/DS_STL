#include<iostream>
using namespace std;
void sum(int arr[])
{

    int temp;
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}
int main()
{

    int a[]={23,45,6};
    sum(a);
    cout<<a[1];
}
