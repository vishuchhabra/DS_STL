#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class node;
node *root=NULL;
class node
{
public:
    int inf;
    node *right;
};
node* create_node(int data)
{
    node *temp;
    temp=new node;
    temp->inf=data;
    temp->right=NULL;
    return temp;
}
void push()
{
    int n;
    cout<<"enter the data"<<endl;
    cin>>n;
    node *temp;
    temp=create_node(n);
    if(root==NULL)
        root=temp;
    else{
        temp->right=root;
        root=temp;
        }

}
void pop()
{

    if(root==NULL)
    cout<<"stack is empty"<<endl;
    else
    {
        cout<<"pop element is:"<<root->inf<<endl;
        node *temp;
        temp=root;
        delete temp;
        root=root->right;
    }

}
int main()
{


    while(1)
    {
          cout<<"1.for push\n2.for pop\n3.for exit"<<endl;
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

