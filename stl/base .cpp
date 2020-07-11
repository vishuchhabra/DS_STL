#include<iostream>
using namespace std;
int main()
{

    int arr[]={23,4,54,5,5,5,5,45};
    cout<<*(&arr[0]+1)<<endl;
    cout<<*(arr)<<endl;
    cout<<*(&arr[0])<<endl;
    return 0;
}
