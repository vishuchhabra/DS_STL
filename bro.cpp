#include<iostream>
using namespace std;
int  sum(int arr[],int n)
{
    int sum=0,typ=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        for(int p=i;p<j;p++)
            typ=typ+arr[p];
        if(typ>sum)
            sum=typ;
        typ=0;

    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<sum(arr,n);
    return 0;


}
