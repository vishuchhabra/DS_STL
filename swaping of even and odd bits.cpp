#include<iostream>
using namespace std;
int main()
 {
    int cas;
    cin>>cas;
    for(int i=1;i<=cas;i++)
    {
     unsigned 	int n;
	cin>>n;
	 unsigned int even_bits=n & 0xAAAAAAAA;
	 cout<<even_bits<<endl;
	   unsigned int odd_bits=n  & 0x55555555;
	   cout<<odd_bits<<endl;
	odd_bits=odd_bits<<1;
	 cout<<odd_bits<<endl;
	even_bits>>=1;
	 cout<<even_bits<<endl;

	n=even_bits | odd_bits;
	cout<<n<<endl;
    }
	return 0;
}
