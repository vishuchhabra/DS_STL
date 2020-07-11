#include<iostream>
using namespace std;
 void selection_sort(int arr[],int n)
    {
    int t;
    cout<<"after sorting your elements are following as "<<endl;
    for(int k=0;k<n-1;k++)
    for(int l=k+1;l<n;l++)
    {

        if(arr[k]>arr[l])
        {

          t=arr[k];
          arr[k]=arr[l];
          arr[l]=t;
}    }
    for(int o=0;o<n;o++)
        cout<<arr[o]<<" ";
        }


int main()
{
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];

    cout<<"enter the elements of array"<<endl;
    for(int j=0;j<n;j++)
    cin>>arr[j];
    selection_sort(arr,n);
    return 0;

}
