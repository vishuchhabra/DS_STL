#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class node;

class node
{
public:
    int inf;
    node *pre=NULL,*next=NULL;
};
void insertion_first(node **start)
{

    node *temp;
    temp=new node;
    cout<<"enter the element which you  want to insert"<<endl;
    int item;
    cin>>item;
    temp->inf=item;
    if(*start==NULL)
        *start=temp;
    else
    {

        temp->next=*start;
(*start)->pre=temp;
        *start=temp;
    }
}
void print(node **start)
{
node *n;
n=*start;
if(*start==NULL)
    cout<<"list is empty"<<endl;
else{
        cout<<"elements are following as :"<<endl;

while(n->next!=NULL)
{
    cout<<n->inf<<endl;
    n=n->next;
}
 cout<<n->inf<<endl;


}
}
void deletion_first(node **start)
{
   node *n;
   n=*start;
   if(*start==NULL)
        cout<<"list is empty...."<<endl;

   else
    {
        cout<<"deleting element is following as"<<endl<<(*start)->inf<<endl;
       (* start)=(*start)->next;
        if(*start!=NULL)
        (*start)->pre=NULL;
        delete n;
   }

}
int main()
{
    node *star=NULL;
    while(1)
    {
    cout<<"1.for inserting the node at first\n2.exit from the program\n3.for printing the whole element of the list\n4.deleting the element from the first\n";
    int n;
    cin>>n;
    switch(n)
    {

    case 1:
        insertion_first(&star);
        system("pause");
        system("cls");
        break;
    case 2:
        exit(0);
    case 3:
        print(&star);
         system("pause");
        system("cls");
        break;
    case 4:
        deletion_first(&star);
         system("pause");
        system("cls");
        break;
    default:
        cout<<"please enter the valid  input....."<<endl;

   system("pause");
        system("cls");
        break;
    }}
    return 0;
}
