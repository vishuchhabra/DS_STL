#include<iostream>
using namespace std;
int main()
{
int n;
int arr[50];
cout<<"enter the size of array"<<endl;
cin >>n;
cout<<"enter the elements of array"<<endl;
for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the location of the element where you have to put the element"<<endl;
int loc;
cin>>loc;
if(loc<n)
{

for(int k=n-1;k>=loc;k--)
    arr[k+1]=arr[k];
    cout<<"ënter the element which you have to insert"<<endl;
cin>>arr[loc];
cout<<"after the insertion your array is following as "<<endl;
for(int p=0;p<=n;p++)
    cout<<arr[p]<<" ";
}
    else
        cout<<"please enter the valid location"<<endl;
        return 0;
}
