#include<iostream>
using namespace std;
void addition(int **arr,int **brr,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=arr[i][j]+brr[i][j];
		}
	}
}
void subtraction(int **arr,int **brr,int n)
{
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=arr[i][j]-brr[i][j];
		}
	}
}
void multiplication(int **arr,int **brr,int n)
{
	
	for(int i=0;i<n;i++)
	{
	
		
			for(int j=0;j<n;j++)
			{
				int sum=0;
			for(int k=0;k<n;k++)
			{
			sum=sum+(arr[i][k]*brr[k][j]);
			}
			arr[i][j]=sum;
			
	}
}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"     ";
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"enter size";
	cin>>n;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	arr[i]=new int[n];
	cout<<"enter elements";
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
		cin>>arr[i][j];
		}
	}
	cout<<"enter elements";
		int **brr=new int*[n];
	for(int i=0;i<n;i++)
	brr[i]=new int[n];
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
		cin>>brr[i][j];
		}
		}
		int c;
		cout<<"press 1 for addition 2 for subtraction 3 for multiplication";
		cin>>c;
		if(c==1)
		{
			addition(arr,brr,n);
		
			cout<<endl;
		}
	if(c==2)
	{
	subtraction(arr,brr,n);

	cout<<endl;
}
if(c==3)
{
	multiplication(arr,brr,n);
	
	cout<<endl;
	return 0;
}
}
	
		
