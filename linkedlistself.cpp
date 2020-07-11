#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int info;
    node * next;
};

node * getnode()
{
    node *s = new node;
    s->info = NULL;
    s-> next = NULL;
    return s;
}

node * start;

void insertatbeg(int k)
{
    node * m = getnode();
    m->info = k;
    m->next = start;
    start = m;
}

void insertbetween(int m , int n , int k)

{
    if(start ==NULL)
    {
        cout<<"Insertion not possible";
    }
    else {
            node * locp,*loc;
    loc = start;
    locp = start->next;
    while(!locp==NULL)
    {
        if((locp->info == n) && (loc->info==m))
        {
            node * t = getnode();
            t->info = k;
            t->next = locp;
            loc->next = t;
            cout<<k<<" inserted\n";
            break;
        }
        else{
            cout<<"insertion not possible\n";
        }
        loc= loc->next;
        locp = locp->next;
    }
          }

}

void insertatend(int k)

{
    if(start==NULL)
    {
        insertatbeg( k);
    }
   else{
            node * t = getnode();
    t->info = k;
    t->next = NULL;
    node * m = start;
    while(!(m->next)==NULL)
    {
        m = m->next;
    }
    m->next = t;
}
}

void traverse()
{        node * p = start;
    while (!p    == NULL)
    {
        cout<<p<<"->"<<p->info<<"->"<<p->next;
        p = p->next;
        cout<<"\n";
    }
}



void deleteatbeg()
{
    if(!start ==NULL)
    {
        start = start->next;
    }
    else{
        cout<<"UNDERFLOW";
    }
}

void deleteatend()
{
    if (start == NULL)
    {
        cout<<"UNDERFLOW";
    }
 else {
        node *m = start;
 while(!(m->next)==NULL)
 {
     if(m->next->next ==NULL)
     {delete(m->next);
         m->next=NULL;

         break;
     }
     m=m->next;
 }
}
}


void deleteanywhere(int k)
{     if(start == NULL)
{
    cout<<"UNDERFLOW";
}
else {
    node * m = start;
    while (!m ==NULL)
    {

        if(m->next->info == k)
        {
            node * t ;
            t = m->next->next;
            delete(m->next);
            m ->next=t;
            break;
        }
        m=m->next;
    }
}
}


void search_ll(int item)
{
    if(start==NULL)
    {
        cout<<"The linked list is empty";
    }

    else

    {  node * p=start;
        while(!p==NULL)
        {
            if(p->info==item)
            {
                cout<<item<<" found at "<<p->next<<"\n";
                break;
            }

            else if(p==NULL)
            {
                cout<<"the item not found";
            }
             p=p->next;
        }
 if(p==NULL)
            {
                cout<< item <<" not found\n";
            }
    }
}
int main()
{   insertatbeg(15);
    insertatbeg(12);
    insertbetween(12,15,4);
    insertatend(33);
    insertatend(43);
    traverse();
    search_ll(15);
    search_ll(3);
    deleteatbeg();
    deleteatend();
    insertatbeg(1);
    insertatbeg(2);
    deleteanywhere(4);
    traverse();
    return 0;
}




