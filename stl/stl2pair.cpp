#include<iostream>
#include<string>
using namespace std;
class student
{

private:
    int roll;
    string name;
public:
  void setdata(string n,int r)
  {
      roll=r;
      name=n;


  }
  void printdata()
  {

      cout<<"name:"<<name<<endl<<"roll  no.:"<<roll<<endl;
  }
};
int main()
{

    pair <student,int> p;
    student s;
    s.setdata("vishu chhabra",25);
    student y;
    p=make_pair(s,786);
    y=p.first;
    y.printdata();
    cout<<p.second<<endl;;
    return 0;


}
