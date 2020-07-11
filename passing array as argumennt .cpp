#include<iostream>
using namespace std;
void all(int ar[],int m)

{
    for(int j=0;j<m;j++)
    {


        cout<<ar[j]<<"  "<<endl;
    }


}
int main()
{

    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"elements of array are following as"<<endl;
        all(arr,n);
        return 0;

}
