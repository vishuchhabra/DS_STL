#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class node;
node *start=NULL;
class node
{
    public:
    int inf;
    node *link=NULL;

};
node* create ()
{

    node *n;
    n=new node;
    return n;

}
void insertion_at_end()
{
    cout<<"enter the element which you  want to insert at end"<<endl;
    int item;
    cin>>item;
    node *temp,*t;

    temp=create();
    temp->link=NULL;

    temp->inf=item;
    if(start==NULL)
        start=temp;
    else
        {
            t=start;
    while(t->link != NULL)

       t= t->link ;
       t->link=temp;
    }

}
void deletion_end()
{
    node *t;
    t=start;
    if(start==NULL)
    {
        cout<<"no any element is present to extract from the list"<<endl;
    }
    else{
    if(start->link!=NULL)
    {
    while(t->link->link!=NULL){

        t=t->link;
    }
cout<<"deleting element is following as "<<endl<<t->link->inf<<endl;
t->link=NULL;
    }
    else{
       cout<<"deleting element is following as"<<endl<<t->inf<<endl;
       start=NULL;
    }}
}
void insertion_at_start()
{

    int item;
    cout<<"enter the item which you want to insert"<<endl;
    cin>>item;
    node *temp;
    temp=create();
    temp->inf=item;
    node *n;
    n=start;
    temp->link=n;
    start=temp;

}
void print()
{
    node *t;
    t=start;
    if (t==NULL)
    cout<<"there is no any element present in the link list"<<endl;
    else{
    while(t->link!=NULL){
        cout<<t->inf<<endl;
        t=t->link;
    }
    cout<<t->inf<<endl;
    }
}
void deletion_at_start()
{
    if(start==NULL)
    {
        cout<<"there is no element to extract"<<endl;
    }
    else{
    node *n;
    n=start;
    cout<<"deleting element is following as"<<endl<<n->inf<<endl;
    n=n->link;
    start=n;
    }

}
void insertion_position(int item,int x)
{
    if(x==0)
    {

        node *temp;
    temp=create();
    temp->inf=item;
    node *n;
    n=start;
    temp->link=n;
    start=temp;

    }
    else
    {
        node *i;
        i=create();
        int j=1;
        node *temp;
        temp=start;
        while(j<x)
        {
        temp=temp->link;
       j++;
        }
        i->inf=item;
        i->link=temp->link;
        temp->link=i;

    }

}
void deletion_pos()
{

    cout<<"enter the index of the element which you want to delete(start from 0)"<<endl;
    int n;
    cin>>n;
    if(n==0)
        deletion_at_start();
    else
    {

        int j=1;
        node *temp;
        temp=start;
        while(j<n)
        {

            temp=temp->link;
            j++;
        }
        cout<<"deleting element is following as "<<endl<<temp->link->inf<<endl;
        temp->link=temp->link->link;

    }
}
int position(int item)
{

    node *p;
    p=start;
    int count=0;
    while(1)
    {
       if(p->inf==item)
       {

           return count;
           break;
       }
       else
       {
           p=p->link;
           count++;

        }

    }
}
void siz()
{


    node *t;
    t=start;
    int count=1;
    if(t==NULL)
        cout<<"size of the list is following as :0"<<endl;
    else
    {

        while(t->link!=NULL)
        {
            count++;
            t=t->link;


        }
        cout<<"size of the list is following as :"<<count<<endl;
    }
}
int main()
{
    while(1)
    {
    cout<<"1.for inserting the element at end \n2.for printing the element in the list\n3.for deleting the element from end\n4.for exit from  the program\n5.insertion at the beginning\n";
 cout<<"6.for deleting element from the start"<<endl<<"7.for inserting at the given index\n8.for deletion at the given position"<<endl;
cout<<"9.searching the index of the element"<<endl<<"10.for printing the size of list"<<endl;

    int n;
    cin>>n;
    switch(n)
    {

    case 1:
        insertion_at_end();
        system("cls");
        break;
    case 2:
        cout<<"elements are following as "<<endl;
        print();
        system("pause");
        system("cls");
        break;
    case 3:
        deletion_end();
         system("pause");
        system("cls");
        break;

    case 4:
        exit(0);
        break;
    case 5:
      insertion_at_start();
      system("pause");
      system("cls");
        break;
    case 6:
        deletion_at_start();
        system("pause");
        system("cls");
        break;
    case 7:
        cout<<"enter the position where you want to insert the element(starting from 0)"<<endl;
        int n;
        cin>>n;
        int item;
        cout<<"enter the item which you  want to insert"<<endl;
        cin>>item;
        insertion_position(item,n);
        system("pause");
        system("cls");
        break;
    case 8:
        deletion_pos();
        system("pause");
        system("cls");
        break;
    case 9:
        cout<<"enter the element which you want to search"<<endl;
        int pos;
        cin>>pos;
        cout<<"position of  the element is following as :"<<position(pos)<<endl;
        system("pause");
        system("cls");
        break;
    case 10:
        siz();
         system("pause");
        system("cls");
        break;


    default:
        cout<<"please enter the valid input"<<endl;
        system("pause");
        system("cls");

    }}
    return 0;

}
