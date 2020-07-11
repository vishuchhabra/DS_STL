#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue <int>p;
    cout<<"enter the element which do you want to add into the queue"<<endl;
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        p.push(x);

    }
    cout<<"after removing the element from the queue are following as  "<<endl;
    for(int i=0;i<5;i++)
    {

        cout<<p.front()<<endl;
        p.pop();
    }
    return 0;
}

