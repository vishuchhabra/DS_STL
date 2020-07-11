#include<iostream>
using namespace std;
class node
{
public:
    int inf;
    node *left,*right;
};
node* make_node(int data)
{

    node *ptr;
    ptr=new node;
    ptr->inf=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return(ptr);
}
//traversal by all  the three methodss
//preorder
void traversal1(node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->inf<<endl;
        traversal1(ptr->left);
        traversal1(ptr->right);
    }


}
//inorder
void traversal2(node *ptr)
{
    if(ptr!=NULL)
    {
        traversal2(ptr->left);
        cout<<ptr->inf<<endl;
        traversal2(ptr->right);
    }


}
//postorder
void traversal3(node *ptr)
{
    if(ptr!=NULL)
    {
        traversal3(ptr->left);
        traversal3(ptr->right);


        cout<<ptr->inf<<endl;

    }


}
//search function in the tree
node* search_tree(node* point,int data)
{

   if(point==NULL)
   return NULL;
   if(data<point->inf)
   return search_tree(point->left,data);
   else if (data>point->inf)
   return search_tree(point->right,data);
   return (point);
}
void insert_tree(node *root,int data)
{
    node *val;
    val=make_node(data);
    node *ptr;
    ptr=root;
    if(ptr==NULL)
    ptr=val;
    else
    while(ptr!=NULL)
        {
        if(data<ptr->inf)
        {

            if(ptr->left==NULL){
                ptr->left=val;
                ptr=NULL;
                               }
               else
                ptr=ptr->left;
        }
        else if(data>ptr->inf)
        {

            if(ptr->right==NULL){
                ptr->right=val;
                ptr=NULL;       }
                else
                ptr=ptr->right;
        }
        }
}
int max_tree(node *root)
{


      if(root==NULL)
        return INT_MIN;
        else
        {
        int m=root->inf;
        int res1=max_tree(root->left);
        int res2=max_tree(root->right);
        if(res1>m)
            m=res1;
        if(res2>m)
            m=res2;
        return m;
        }
}
void deletion_tree(node *start,int data)
{


}

int main()
{
    node *start;
    start=make_node(45);
    start->left=make_node(34);
    start->right=make_node(48);
    start->left->left=make_node(32);
    start->left->right=make_node(43);
    start->right->left=make_node(46);
    start->right->right=make_node(89);
    //inserting code in tree
      insert_tree(start,66);
    cout<<"preorder method"<<endl;
    traversal1(start);
   // cout<<"inorder method"<<endl;
   // traversal2(start);
    //cout<<"postorder method"<<endl;
    //traversal3(start);

    //saerching code to appply the fucntion
  /*  cout<<"enter the element which you have to find"<<endl;
    int data;
    cin>>data;
    node *root;
    root=search_tree(start,data);
    if(root!=NULL)
    cout<<"address is :"<<root<<endl<<"To verify element in this address is :"<<root->inf<<endl;
    else
        cout<<"there is no such element exist"<<endl;

*/
//maximum no in the tree
cout<<"maximum no. is "<<max_tree(start)<<endl;


    return 0;
}
