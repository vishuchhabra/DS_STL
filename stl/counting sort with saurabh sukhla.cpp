#include<iostream>
using namespace std;
int main()
{

    int n,range;
    cout<<"enter the size and range of the array"<<endl;
    cin>>n>>range;
    int arr[n],arr1[n],arr2[range+1]={0};
    cout<<"enter the elements of the array under the range(positive numbers are valid only)"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    if(arr[i]<0)
    {

        cout<<"your input  type is invalid !!!!!!"<<endl;
        return 0;
    }
    arr2[arr[i]]++;
    }
    for(int i=1;i<=range;i++)
        arr2[i]=arr2[i]+arr2[i-1];
    for(int j=n-1;j>=0;j--)
    {

        arr1[arr2[arr[j]]-1]=arr[j];
        arr2[arr[j]]--;
    }
    cout<<"after sorting your elements are following as "<<endl;
    for(int j=0;j<n;j++)
    cout<<arr1[j]<<" ";
    return 0;
}
