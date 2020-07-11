#include<iostream>
using namespace std;
int gcm(int p,int q)
{

    if(p==q)
            return p;
    else if(p%q==0)
            return q;
    else if(q%p==0)
            return p;
    else if(p>q)
            return (gcm(p%q,q));
    else if(q>p)
            return (gcm(p,q%p));


}
int main()
{

    int m,n;
    cout<<"enter the numbers whose greatest common factor you want to find:-"<<endl;
    cin>>m>>n;
    cout<<"highest common factor is following as :-"<<endl<<gcm(m,n);

}
