

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter the symbol using that do you want to print the pattern"<<endl;
    char c;
    cin>>c;
    cout<<"enter the no. for the pattern"<<endl;
    cin>>n;
    int req=(n*2)-1;
    int pos=req/2;
    int coun=0;
    cout<<"your pattern is following as "<<endl;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=req;j++)
        {
            if(coun<i)
            {
                if(j<=pos)
                    cout<<" ";
                else{
                    cout<<c<<" ";
                coun++;

            }}
            else
                break;

        }
        cout<<endl;
            coun=0;
            pos--;
    }

}
