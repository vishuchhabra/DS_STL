#include<iostream>
#include<stdlib.h>

using namespace std;
class stack
{

private:
    int capacity;
    int top=-1;
    int *arr;


public:
    void creation(int cap)
    {
        capacity=cap;
        arr=new int(cap);


    }
    int   isfull()
    {
        if(top==capacity-1)
            return 1;
            else
                return 0;

    }
        int isempty()
    {

        if(top==-1)
            return 1;
            else
                return 0;
    }
    int  push()
    {
        int item;
        if(isfull()==1)
            cout<<"stack is full"<<endl;

       else
       {
           cout<<"enter the pushing element in stack"<<endl;
           cin>>item;

           top=top+1;
           arr[top]=item;
       }



    }
    void pop()
    {
        if(isempty()==1)
            cout<<"stack is empty"<<endl;
        else
        {
            cout<<"pop element is following as:-"<<endl;
            cout<<arr[top]<<endl;
        top=top-1;
        }

    }
};
int main()
{

    stack  vishu;
    int n;
    cout<<"enter the size of  stack"<<endl;
    cin>>n;
    vishu.creation(n);
    while(1)
    {
        cout<<"1.for pushing the elements"<<endl<<"2.for  pop the  element"<<endl<<"3.for exit"<<endl;
int u;
cin>>u;
switch(u)
{
 case 1:


    vishu.push();
    system("pause");
    system("cls");

    break;
    case 2:
    vishu.pop();
    system("pause");
    system("cls");
    break;
    case 3:
        exit(0);
}
    }
    return 0;
}
