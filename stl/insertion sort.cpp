#include<iostream>
using namespace std;
void insertion(int arr[],int n)
    {
    for(int j=1;j<n;j++)
    {

        int k=j-1;
        int temp=arr[j];
        while(k>=0&&arr[k]>temp)
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;

    }
    cout<<"after sorting your elements are following as "<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
int main()
{

    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertion(arr,n);

        return 0;
}
