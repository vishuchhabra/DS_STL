#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <string,int ,int>p1;
    cout<<"enter the name ,age and favorite number respectively"<<endl;
    string m;
    int c,d;
    getline(cin,m);
    cin>>c>>d;
    p1=make_tuple(m,c,d);
    cout<<"value of your tuple is following as"<<endl;

        cout<<get<0>(p1)<<" ";
         cout<<get<1>(p1)<<" ";
          cout<<get<2>(p1)<<" ";

     return 0;
    }


