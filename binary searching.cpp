#include<iostream>
using namespace std;
int main()
{

    cout<<"enter the size of array:"<<endl;
    int n,p=0;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int temp;
    for(int j=0;j<n-1;j++)


        for(int k=j+1;k<n;k++)
    {   if(arr[j]>arr[k])
        {

            temp=arr[k];
            arr[k]=arr[j];
            arr[j]=temp;

          }}
          cout<<"after sorting elements are following as"<<endl<<endl;
        for(int h=0;h<n;h++)
            cout<<arr[h]<<" ";

          int s;
          cout<<endl<<"enter the element which you want to search"<<endl;
          cin>>s;
     int beg=0,en,mid;
     en=n-1;
     while(beg<=en)
     {

         mid=(beg+en)/2;
         if(arr[mid]==s)
         {


            cout<<"location is following as"<<endl<<mid<<endl;
            p=8;
         break;}
         if (s<arr[mid])
            en=mid-1;
          if (s>arr[mid])
            beg=mid+1;
     }
if(p==0)
    cout<<"no such number exist";

    return 0;
}

