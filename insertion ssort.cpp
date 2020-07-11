#include<iostream>
using namespace  std;
int main()
{

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int key,j;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int p=0;p<n;p++)
        cin>>arr[p];
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {

            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }
    cout<<"after sorting your elements are following as"<<endl;
      for(int p=0;p<n;p++)
        cout<<arr[p]<<"  ";

    }

