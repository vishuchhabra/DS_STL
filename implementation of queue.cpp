#include<iostream>
#include<stdlib.h>
using namespace std;
class queue
{
    int capacity;
    int front =-1,rear=-1;
    int *arr;
public:
    void  creation(int cap)
    {

        capacity=cap;
        arr=new int(cap);

    }
    int isempty()
    {

        if(front==-1)
            return 1;
        else

            return 0;
    }
    int isfull()
    {

        if((rear+1)%capacity==front)
            return 1;
        else
            return 0;
    }
    void en()
    {
        int item;
        if(isfull()==1)
            cout<<"queue is full"<<endl;
        else
        {

            if(front ==-1&&rear==-1)
            {
                cout<<"enter your element"<<endl;

                cin>>item;
                front=0;
                rear=0;
                arr[rear]=item;
            }
            else
            {
                cout<<"enter your element"<<endl;

                cin>>item;
                rear=(rear+1)%capacity;
                arr[rear]=item;
            }
        }
    }
    void out()
    {

        if(isempty()==1)
            cout<<"queue is empty"<<endl;
        else
        {

            int item;
            cout<<"your deleting element is following as "<<endl;
            item=arr[front];
            cout<<item<<endl;
            if(front==rear)
            {

                front=rear=-1;
            }
            else
            {

                front=(front+1)%capacity;
            }
        }
    }


};
int main()
{
    queue vishu;
    int p;
    cout<<"enter the size of the  queue"<<endl;
    cin>>p;
    vishu.creation(p);
      int y;


    while(1)
    {
  cout<<"1.for insertion "<<endl<<"2.deletion of element"<<endl<<"3.for exit"<<endl;


    cin>>y;
    switch(y)
    {


    case 1:

    vishu.en();
    system("pause");
    system("cls");
    break;
    case 2:
        vishu.out();
    system("pause");
    system("cls");
        break;
    case 3:
        exit(0);
    }}
    return 0;

}

