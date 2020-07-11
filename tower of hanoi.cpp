#include<iostream>
using namespace std;
void toh(int n,string b,string d,string h)
{

    if(n>=1)
    {

        toh(n-1,b,h,d);
        cout<<"move  "<<n<<" disk from  "<<b<<" to "<<d<<endl;
        toh(n-1,h,d,b);

    }
}
int main()
{
    cout<<"enter the no.for that you  want to find solution of TOWER OF HANOI:- "<<endl;

    int n;
    cin>>n;
    cout<<"steps are following as :-"<<endl<<endl;

    toh(n,"SOURCE","DESTINATION ","HELPER");
    return 0;


}
