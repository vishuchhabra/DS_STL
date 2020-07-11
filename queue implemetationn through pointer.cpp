#include<iostream>
#include<stdlib.h>
using namespace std;
class queu
{
private:
    int fron=-1,rear=-1;
    int *arr;
    int capacity;
public:

    queu* create(int cap)
    {

        queu *point;
        point=new queu;
        point->capacity=cap;
        point->arr=new int[cap];
        return point;
    }
    int isempty(queu *point)
    {

        if(point->rear==-1)
            return 1;
        else
            return 0;
    }
    int isfull(queu *point)
    {

        if((point->rear+1)%point->capacity==point->fron)
            return 1;
        else
            return 0;
    }
    void  insertion(queu* point)
    {
       if(isfull(point)==1)
       {
            cout<<"queue is full"<<endl;
            system("pause");
       }
       else
       {
           if(point->rear==-1&&point->fron ==-1)
           {

            int item;
       cout<<"enter the item"<<endl;
       cin>>item;
       point->rear=0;
       point->fron=0;
       point->arr[point->rear]=item;


           }
           else
           {

        point->rear=(point->rear+1)%point->capacity;
       int item;
       cout<<"enter the item"<<endl;
       cin>>item;
       point->arr[point->rear]=item;
           }

       }
    }
    void deletion(queu  *point)
    {

        if(isempty(point)==1)
        {
         cout<<"queue is  empty"<<endl;
         system("pause");
        }
        else
        {

            if(point->rear==point->fron)
            {
                cout<<"deleting element is following as"<<endl<<point->arr[point->fron]<<endl;
                rear=fron=-1;
                system("pause");
            }
            else
                {
                    cout<<"deleting element is following as"<<endl<<point->arr[point->fron]<<endl;

                    point->fron=(point->fron +1)%point->capacity;
                    system("pause");
            }

        }
    }


};

int main()
{
int n;
cout<<"enter the size of queue which you want to implement"<<endl;
cin>>n;


    queu *start;
    start=new queu;

    start=start->create(n);


    while(1)
    {
        cout<<"1.for inserting the element\n2.for deleting the element\n3.for exit from the program"<<endl;
    int u;
    cin>>u;
        switch (u)
            {
            case 1:
         start->insertion(start);
          break;
            case 2:
                start->deletion(start);
                break;
            case 3:
                exit(0);
            default:
                cout<<"please enter the valid identity"<<endl;
                system("pause");
            }

            system("cls");
    }
    return 0;


}
