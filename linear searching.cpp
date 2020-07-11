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
    int s;
    cout<<"enter the element for that you want to find locations"<<endl;
    cin>>s;
    cout<<"locations for searching element may be 1 to "<<n<<endl<<endl;
    cout<<"locations for element are following as:- "<<endl<<endl;
    for(int j=0;j<n;j++)
    {

        if(s==arr[j])
        {

            cout<<"location is "<<j<<endl;
            p=7;
        }
    }
    if(p==0)
        cout<<endl<<"nothing location for the element is present."<<endl;
    return 0;
}
