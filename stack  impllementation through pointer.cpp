#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
private:
    int top=-1;
    int capacity;
    int *arr;
public:
    stack* create(int cap)
    {

        stack *point;
        point =new stack;
        point->capacity=cap;
        point->arr=new int[cap];
        return (point);
    }
   int isfull(stack *point)
   {

       if(point->top==point->capacity-1)
        return 1;
       else
        return 0;
    }
    int isempty(stack *point)
    {

        if(point->top==-1)

            return 1;
        else
            return 0;
    }
    void push(stack *point)
    {

        if(isfull(point)==1)
        {
            cout<<"stack is full "<<endl;
            system("pause");
        }
        else
        {
            int item;
            cout<<"enter the element to insert"<<endl;
            cin>>item;
            point->top=point->top+1;
            point->arr[point->top]=item;

        }
    }
 void pop(stack *point)
 {

     if(isempty(point)==1)
     {

         cout<<"stack  is empty ...."<<endl;

         system("pause");}
      else
        {
            cout<<"pop  element is following as"<<endl<<point->arr[point->top]<<endl;
            point->top-=1;
            system("pause");
            }
 }


};
int main()
{
    int n;
    cout<<"enter the size of stack you want to implement"<<endl;
    cin>>n;
    stack *start;
    start=new stack;
    start=start->create(n);


    while(1)
    {
        cout<<"1.for pushing the element\n2.for pop the element\n3.for exit from the program"<<endl;
    int u;
    cin>>u;
        switch (u)
            {
            case 1:
         start->push(start);
          break;
            case 2:
                start->pop(start);

                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"please enter the valid identity"<<endl;
                system("pause");
            }

            system("cls");
    }
    return 0;
}
