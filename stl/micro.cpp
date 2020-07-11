#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
           even++;
           else
            odd++;
           }
    int temp;
    for(int j=0;j<n-1;j++)
        for(int k=j;k<n;k++)
        if(arr[j]>arr[k])
        {

            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;

        }
        int co=0;
        int i1=0,i2=0,pos=0;
        int arr1[n];
        if(even<odd)

        while(co<=n)
        {
             while(1)
            {
                if(arr[i2]%2==1)
                {

                    arr1[pos]=arr[i2];
                    co++;
                    i2++;
                    pos++;
                    break;
                }
                else
                i2++;

            }

            while(1)
            {
                if(arr[i1]%2==0)
                {

                    arr1[pos]=arr[i1];
                    co++;
                    i1++;
                    pos++;
                    break;
                }
                else
                i1++;

            }

        }
        else

        while(co<=n)
        {
              while(1)
            {
                if(arr[i1]%2==0)
                {

                    arr1[pos]=arr[i1];
                    co++;
                    i1++;
                    pos++;
                    break;
                }
                else
                i1++;

            }
             while(1)
            {

                if(arr[i2]%2==1)
                {

                    arr1[pos]=arr[i2];
                    co++;
                    i2++;
                    pos++;
                    break;
                }
                else
                i2++;

            }



        }
        for(int l=0;l<n;l++)
            cout<<arr1[l]<<" ";

}
