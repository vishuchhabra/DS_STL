#include<iostream>
using namespace std;
int main()
{

    string arr;
    cout<<"enter the string"<<endl;
    cin>>arr;
    int m=arr.size();
    int val,sum=0,j=1,total=0;
    for(int i=m-1;i>=0;i--)
    {


        val=arr[i];


        if(val>=48&&val<=57)
        {
            sum=sum+j*(val-'0');

        }
        else
            continue;
        while(1)
        {
            val=arr[i-1];
            if(val>=48&&val<=57)
        {
            i--;
            j=j*10;
            sum=sum+j*(val-'0');

        }
        else
            break;
        }

j=1;
total=total+sum;
sum=0;

    }
    cout<<"sum is following as"<<endl<<total;

}
