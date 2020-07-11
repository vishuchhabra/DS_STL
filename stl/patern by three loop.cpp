#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int p=n-1;
    int q=1;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=p;j++)
            cout<<" ";
        for(int k=1;k<=q;k+=2)
            cout<<"* ";
        cout<<endl;
        p--;
        q+=2;
    }
}
