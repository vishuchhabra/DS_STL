#include<iostream>
using namespace std;
int main()
{

    int n,max1=0,min1=0,run_up=0;
    cout<<"size:";
    cin>>n;
    int arr[n];
    cout<<"element:";
    cin>>arr[0];
    max1=arr[0];
    min1=arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(max1<arr[i])
         max1=arr[i];
        if(min1>arr[i])
            min1=arr[i];
    }
    if(min1==max1)
        cout<<"No any  runner_up  element is there"<<endl;
        return 0;
    run_up=min1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>run_up&&arr[j]!=max1)
            run_up=arr[j];
    }

    cout<<"runner_up element is:"<<run_up<<endl;
    return 0;
}
