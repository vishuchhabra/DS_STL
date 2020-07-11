#include<array>
#include<iostream>
using namespace std;
int main()
{
int n=9;
array <int ,5> data;
cout<<"enter the elements of array"<<endl;
for(int i=0;i<5;i++)
    cin>>data[i];
cout<<"whole elements of the array are following as"<<endl;
for(int i=0;i<5;i++)
    cout<<data[i]<<" ";
    cout<<"\nfront and back  elements of the array is following as respectively:"<<data.front()<<" "<<data.back()<<endl;
    cout<<"size of the array is following as:"<<data.size()<<endl;
    data.fill(56);
    cout<<"after  filling your array became like following as"<<endl;
    for(int i=0;i<5;i++)
    cout<<data[i]<<" ";
    cout<<"\nafter entering data at 0 index different by using at function:"<<endl;
    data.at(0)=78;
    for(int i=0;i<5;i++)
    cout<<data[i]<<" ";
    cout<<"\ncheck whether this array is empty or not"<<endl;
     cout<<data.empty()<<endl;

     cout<<"after swapping with another array  this  array became like following as"<<endl;


array <int ,5> data1={1,1,1,1,1};
data.swap(data1);
  for(int i=0;i<5;i++)
    cout<<data[i]<<" ";

   return 0;
}
