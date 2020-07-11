#include<iostream>
using namespace std;
void addition(int **arr1,int **arr2,int m1,int n1,int m2,int n2)
{
    if (m1==m2&&n1==n2)
    {
        cout<<"addition  of array is following as "<<endl;
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++)
        {

            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }}
    else
    {

        cout<<"addition is not possible because dimension is not equal...."<<endl;

    }


}
void subtraction(int **arr1,int **arr2,int m1,int n1,int m2,int n2)
{
    if (m1==m2&&n1==n2)
    {
        cout<<"subtraction of array two from one is following as "<<endl;
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++)
        {

            cout<<arr1[i][j]-arr2[i][j]<<" ";
        }
        cout<<endl;
    }}
    else
    {

        cout<<"subtraction  is not possible because dimension is not equal...."<<endl;

    }


}
void transpose(int **arr1,int **arr2,int m1,int n1,int m2,int n2)
{

    cout<<"transpose of first matrix is following as "<<endl;
    for(int i=0;i<n1;i++)
    {

        for(int j=0;j<m1;j++)
            cout<<arr1[j][i]<<" ";
        cout<<endl;
    }
     cout<<"transpose of second  matrix is following as "<<endl;
    for(int i=0;i<n2;i++)
    {

        for(int j=0;j<m2;j++)
            cout<<arr2[j][i]<<" ";
        cout<<endl;
    }
}
void multi(int **arr1,int **arr2,int m1,int n1,int m2,int n2)
{

    int p[m1][n2]={0};
    int sum=0;
    for(int i=0;i<m1;i++)
    {

        sum=0;
        for(int j=0;j<n2;j++)
        {

            for(int k=0;k<m2;k++)
            {

                sum=sum+arr1[i][k]*arr2[k][j];
            }
            p[i][j]=sum;
            sum=0;
        }

    }
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++)
        {

            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{

    int m1,n1,m2,n2;
    cout<<"enter the rows and column of matrix first respectively"<<endl;
    cin>>m1>>n1;
    int **arr1;
    arr1=new int*[m1];
    for(int j=0;j<m1;j++)
        arr1[j]=new int [n1];

    cout<<"enter the element of array first array"<<endl;
    for(int i=0;i<m1;i++)
    for(int j=0;j<n1;j++)
    cin>>arr1[i][j];
    cout<<"enter the rows and column of matrix second respectively"<<endl;
    cin>>m2>>n2;
    int **arr2;
     arr2=new int*[m2];
    for(int p=0;p<m2;p++)
        arr2[p]=new int [n2];

    cout<<"enter the element of array second array"<<endl;
    for(int p=0;p<m2;p++)
    for(int q=0;q<n2;q++)
    cin>>arr2[p][q];
    addition(arr1,arr2,m1,n1,m2,n2);
    subtraction(arr1,arr2,m1,n1,m2,n2);
    transpose(arr1,arr2,m1,n1,m2,n2);
    cout<<"multiplication of the matrix one with two is following as "<<endl;
     multi(arr1,arr2, m1, n1, m2, n2);
    return 0;
}
