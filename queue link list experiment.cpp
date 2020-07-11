#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class node
{
public:
    int inf;
    node *link;
};
node* create_node(int data)
{
    node *temp;
    temp=new node;
    temp->inf=data;
    temp->link=NULL;
    return temp;
}
void push(node **start1,node **en1)
{
    int n;
    cout<<"enter the data"<<endl;
    cin>>n;
    node *temp;
    temp=create_node(n);
    if(*start1==NULL && *en1==NULL){
        *start1=temp;
        *en1=*start1;
        return;
    }
    (*en1)->link=temp;
    *en1=temp;


}
void pop(node **start1,node **en1)
{

    if(*start1==NULL && (*en1)==NULL)
    cout<<"queue is empty"<<endl;
    else if(*start1==*en1)
    {
        cout<<"deleting element:"<<(*start1)->inf<<endl;
        *start1=NULL;
        *en1=*start1;

    }
    else
    {
        cout<<"deleting element:"<<(*start1)->inf<<endl;
        *start1=(*start1)->link;
    }

}
int main()
{
    node *start=NULL,*en=NULL;
    while(1)
     {
          cout<<"1.for insertion\n2.for deletion\n3.for exit"<<endl;
          int y;
          cin>>y;
    switch(y)
    {

    case 1:
        push(&start,&en);
        break;
    case 2:
        pop(&start,&en);
        getch();
        break;
    case 3:
        exit(0);
    default:
        cout<<"please enter the valid input"<<endl;
        getch();

    }
   system("cls");
    }

return 0;
}


