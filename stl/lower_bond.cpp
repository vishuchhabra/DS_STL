#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,val,c=0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    c++;
    for(int i=1;i<n;i++)
    {
        cin>>val;
        if(arr[c-1]!=val)
        {
           arr[c]=val;
            c++;
        }
        val=0;

    }
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
    cin>>arr1[i];
    sort(arr,arr+c);
   // for(int j=0;j<c;j++)
    //cout<<arr[j]<<" ";
    //cout<<"\nposition"<<endl;
    int pos;
    for(int k=0;k<m;k++)
    {

        if(binary_search(arr,arr+c,arr1[k]))
        {
            val=lower_bound(arr,arr+c,arr1[k])-arr;
            val++;
           // cout<<c+val-2<<endl;
            cout<<c+1-val<<endl;;

        }
        else
        {
            val=lower_bound(arr,arr+c,arr1[k])-arr;
            //cout<<c+val-1<<endl;
            cout<<c+1-val<<endl;
        }
    }


}
