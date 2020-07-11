#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    vector <int >i;
    cout<<"enter how much numbers do you want to insert"<<endl;
    int n;
    cin>>n;
    int x;
    cout<<"enter the elements of the array"<<endl;
    for(int j=0;j<n;j++)
        {
          cin>>x;
          i.push_back(x);

        }
        cout<<"array  stored successfully and result is following as"<<endl;

        sort(i.begin(),i.end());
        for(int j=0;j<i.size();j++)
        {

            cout<<i[j]<<"  "<<endl;
        }
        cout<<"enter the element which do you want to search"<<endl;
        int v;
        cin>>v;
        cout<<"result is following present between 1  and 0:::"<<binary_search(i.begin(),i.end(),v)<<endl;
        cout<<"sorting in the descending order is following as"<<endl;
        sort(i.begin(),i.end(),greater<int>());

        for(int j=0;j<i.size();j++)
        {

            cout<<i[j]<<"  "<<endl;
        }
        cout<<"enter the element to insert"<<endl;
        int h;
        cin>>h;

        i.insert(i.begin(),h);
cout<<"after inserting your array became following as"<<endl;

        for(int j=0;j<i.size();j++)
        {

            cout<<i[j]<<"  "<<endl;
        }

cout<<"after removing the element your vector became like following as  "<<endl;
i.erase(i.begin());

        for(int j=0;j<i.size();j++)
        {

            cout<<i[j]<<"  "<<endl;
        }

        sort(i.begin(),i.end());
        cout<<"after sorting element are following as"<<endl;
          for(int j=0;j<i.size();j++)
        {

            cout<<i[j]<<"  "<<endl;
        }cout<<"enter the number whose indexing do you want to find"<<endl;
        int u;
        cin>>u;
       if( binary_search(i.begin(),i.end(),u)==1)
       {
           cout<<"indexing of the number is following as "<<endl;
          cout<< lower_bound(i.begin(),i.end(),u)-i.begin()<<endl;

       }
       else

       {

           cout<<"number  is not present"<<endl;
       }

return 0;




}
