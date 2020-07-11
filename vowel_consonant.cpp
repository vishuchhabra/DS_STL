#include<iostream>
using namespace std;
int main()
{
    char c;
    int a;
        cin>>c;
    a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(a)
        cout<<"character is vowel"<<endl;
    else
        cout<<"no.is consonant"<<endl;
    return 0;
}
