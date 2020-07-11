#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"ënter the size of array"<<endl;
    cin>>n;
    int arr[50];
    cout<<"ënter the elements of array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int loc;
    cout<<"enter the location of deleting element"<<endl;
    cin>>loc;
    if(loc<n)
    {
    for(int j=loc;j<n-1;j++)
        arr[j]=arr[j+1];
        cout<<"after deleting your array is following as "<<endl;
    for(int y=0;y<n-1;y++)
        cout<<arr[y]<<" ";
    }
    else
        cout<<"please enter the valid location"<<endl;
    return 0;
}
