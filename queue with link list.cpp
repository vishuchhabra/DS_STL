#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class node;
node *start=NULL,*en=NULL;
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
void push()
{
    int n;
    cout<<"enter the data"<<endl;
    cin>>n;
    node *temp;
    temp=create_node(n);
    if(start==NULL && en==NULL){
        start=temp;
        en=start;
        return;
    }
    en->link=temp;
    en=temp;


}
void pop()
{

    if(start==NULL &&en==NULL)
    cout<<"queue is empty"<<endl;
    else if(start==en)
    {
        cout<<"deleting element:"<<start->inf<<endl;
        start=NULL;
        en=start;

    }
    else
    {
        cout<<"deleting element:"<<start->inf<<endl;
        start=start->link;
    }

}
int main()
{


    while(1)
    {
          cout<<"1.for insertion\n2.for deletion\n3.for exit"<<endl;
          int y;
          cin>>y;
    switch(y)
    {

    case 1:
        push();
        break;
    case 2:
        pop();
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


}

