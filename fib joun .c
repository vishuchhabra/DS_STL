#include<stdio.h>
int main()
{
    int n,first=1,second=1,t;
    printf("enter at where do you want to print");
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else if(n==2)
        printf("1 1");
    else
    {
        printf("1 1 ");
        for(int i=3;i<=n;i++)
        {
            t=first+second;
            printf("%d ",t);
            first=second;
            second=t;
        }

    }
    return 0;
}
