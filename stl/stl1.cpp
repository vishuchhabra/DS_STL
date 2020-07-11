#include<iostream>
#include<stack>
#include<stdio.h>
#include<string>
using namespace std;
int main()
         {

             stack<string > r;
             int n;
             cout<<"enter the number of the elements "<<endl;
             cin>>n;

                string  x;
                cout<<"enter the elements  which do you want to push"<<endl;
             for(int i=1;i<=n+1;i++)
             {
                 getline(cin,x);

                 r.push(x);
            }
            cout<<"after pop operation your elements are following as "<<endl;
            for(int i=0;i<n;i++)
            {


            cout<<r.top()<<endl;
            r.pop();
            }
             return 0;
                      }
