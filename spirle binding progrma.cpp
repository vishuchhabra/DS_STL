#include<iostream>
using namespace std;
int main()
{

    int m,n;
    cout<<"enter the row and column respectively"<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the elements respectively "<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
        cout<<"simple printing is following as "<<endl;
          for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;}
        int k,j,p,q,i;
        k=0;
        j=m-1;
        p=0;
        q=n-1;
        while(p<q&&k<j)
        {

            for(i=p;i<=q;i++)
                cout<<arr[k][i]<<" ";
            k++;
            for(i=k;i<=j;i++)
                cout<<arr[i][q]<<" ";
            q--;
            if(p<q)
            {

                for(i=q;i>=j;i--)
                    cout<<arr[j][i]<<" ";
                j--;}
                if(k<j)
                {
                    for(i=j;i>=k;i--)
                        cout<<arr[i][p]<<" ";
                    p++;
                }

        }
        return 0;
}
