#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class node;
node *head=NULL;
class node
{
    public:
    int data;
    node *next;
};


node* create()
{
    node *ptr;
    ptr=new node;

    ptr->next=NULL;
    return ptr;
}
void insertion()
{

    node *arr;
    int n;
    cin>>n;
    arr=create();
    arr->data=n;
    arr->next=head;
    head=arr;

}
void print()
{
    node *arr;
    //arr=new node;
    arr=head;
    while(arr!=NULL)
    {

        cout<<arr->data<<endl;
        arr=arr->next;
    }

}
void deletion()
{

    cout<<"deleting element is :"<<head->data<<endl;
    head=head->next;
}

int main()
{
    int n;
    while(1)

    {
    cout<<"1.for insertion at beginning \n2. print\n3.for deletion at  beginning"<<endl;
    cin>>n;
    switch(n)

    {
    case 1:
        insertion();
        system("cls");
        break;
    case 2:
        print();
        getch();
        system("cls");
        break;
    case 3:
        deletion();
        getch();
        system("cls");

    }
    }
    return 0;
}

