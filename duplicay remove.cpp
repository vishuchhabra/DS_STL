#include<iostream>
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
node* create(int n)
{

    node  *point;
    point=new node;
    point->inf=n;
    point->link=NULL;
    return point;
}
void insertion()
{

    cout<<"enter element "<<endl;
    int n;
    cin>>n;
    node *p=create(n);
    p->link=start;
    start=p;
}
void print(  node *p)
{

    while(p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->link;

    }
}
void dup(node *t)
{

    node *p=t,*u;
    while(p!=NULL)
    {

        u=p;
        while(u->link!=NULL)
        {

            if(u->link->inf==p->inf)
                u->link=u->link->link;
            else
                u=u->link;

        }
        p=p->link;
    }
}
void deletion_start()
{

    node *p=start;
    p->inf=p->link->inf;
    p->link=p->link->link;
}
void sorted(node *p)
{
    node *ptr1,*ptr2,*ptr;
    ptr1=p;
    while(ptr1->link!=NULL)
    {

        ptr2=ptr1->link;
        while(ptr2!=NULL)
        {

            if(ptr2->inf<ptr1->inf)
            {

                int temp=ptr2->inf;
                ptr2->inf=ptr1->inf;
                ptr1->inf=temp;
            }
            ptr2=ptr2->link;
        }
        ptr1=ptr1->link;
    }
}
int main()
{
    int n;
    while(1)
    {
    cout<<"1.insertion 2.print 3.dup 4.sort 5.deletion"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        insertion();
        system("pause");
        system("cls");
        break;
    case 2:
        print(start);

        system("pause");
        system("cls");
        break;
    case 3:
        dup(start);
        system("pause");
        system("cls");
        break;
    case 4:
        sorted(start);
        system("pause");
        system("cls");
        break;
    case 5:
        deletion_start();
        system("pause");
        system("cls");
        break;

    default:
        cout<<"please enter the valid input "<<endl;
         system("pause");
         system("cls");
}
}}
