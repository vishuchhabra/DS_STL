#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    cout<<count(arr,arr+5,4)<<endl;
    cout<<find(arr,arr+5,4)-arr;

  return 0;

        return 0;



}
