#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
        {
            int p=n,temp;
    for(int j=1;j<=n-1;j++)
    {

        for(int k=0;k<p-1;k++)
        {

            if(arr[k]>arr[k+1])
            {
                temp=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=temp;


            }
        }
        p--;
    }
    cout<<"after bubble sorting elements are following as :-"<<endl;
    for(int k=0;k<n;k++)
        cout<<arr[k]<<"  ";

}
int main()
{

    int n;
    cout<<"enter the size of array:-"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:-"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubble_sort(arr,n);
    return 0;
}
