#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"enter how much values do you want to add "<<endl;
    int n;
    cin>>n;
    cout<<"enter your values in the array"<<endl;
    int m;
    for(int i=0;i<n;i++)
    {

        cin>>m;
        v.push_back(m);
    }
    cout<<"your inserting element are following as "<<endl;
      for(int i=0;i<n;i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"capacity of the vector is following as"<<endl<<v.capacity()<<endl;
    cout<<"size of the vector is following as "<<endl<<v.size()<<endl;
    cout<<"pop element is "<<v[v.size()-1]<<endl;
    v.pop_back();
    cout<<"pop element is "<<v[v.size()-1]<<endl;
     v.pop_back();
     cout<<"size after pop operation is "<<v.size()<<endl;

    cout<<"0 indexing element is following as "<<v.at(0)<<endl;
    v.clear();
    cout<<"after clearing all the element size is"<<v.size()<<endl;
    return 0;

}
