#include<iostream>
#include<algorithm>
using namespace std;
int  binary_ser(int n,int arr[],int m)
{
    int beg=0,en=n-1,mid;
    sort(arr,arr+n);
    cout<<"after sorting array is following as "<<endl;
    for(int i=0;i<n;i++)

        cout<<arr[i]<<" ";
    cout<<endl;
    while(beg<=en)
    {
        mid=(beg+en)/2;
        if(arr[mid]==m)
            return mid;
        else if(m<arr[mid])
            en=mid-1;
        else
            beg=mid+1;


    }




}
int main()
{

    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"enter the element which do you want to search"<<endl;
    int m;
    cin>>m;
    cout<<"position of the enter number  is following as "<<binary_ser(n,arr1,m)<<endl;
    return 0;
}
