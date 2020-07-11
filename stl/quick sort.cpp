#include<iostream>
using namespace std;
void quick(int beg,int e,int a[],int *locp,int n)
{

    int left,right,temp;
    left=beg;
    right=e;
    *locp=beg;
    step1:
    while(a[*locp]<=a[right]&&(*locp)!=right)
        right--;
    if(*locp==right)
        return ;
    if(a[*locp]>a[right])
    {
        temp=a[*locp];
        a[*locp]=a[right];
        a[right]=temp;
        *locp=right;
    }
    goto step2;
    step2:
        while(a[*locp]>=a[left]&&(*locp)!=left)
            left++;
        if(*locp==left)
            return ;
        if(a[left]>a[*locp])
        {
            temp=a[left];
            a[left]=a[*locp];
            a[*locp]=temp;
            *locp=left;
        }
        goto step1;
}
void quicksort(int a[],int n)
{

    int beg,e,top=-1,loc;
    int lower[15],upper[15];
    if(n>1)
    {
        top++;
        lower[top]=0;
        upper[top]=n-1;
        while(top!=-1)
        {

            beg=lower[top];
            e=upper[top];
            top--;
            quick(beg,e,a,&loc,n);
            if(beg<loc-1)
            {top++;
            lower[top]=beg;
            upper[top]=loc-1;
            }
            if(loc+1<e)
            {
                top++;
                lower[top]=loc+1;
                upper[top]=e;


            }
        }

    }

}
int main()
{

    int n;
    cout<<"enter the size of the array which do you want to sort by quick sort"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"after sorting your array is following as "<<endl;

    quicksort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
