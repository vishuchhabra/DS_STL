#include<stdio.h>
int main()
{
    int p=0;

    for(int i=100;i<=999;i++){
    for(int j=2;j<=i/2;j++)
    {

        if(i%j==0)
        {
            p=7;
            break;
        }

    }
    if(p==0)
        printf("%d\n",i);
    p=0;
    }
    return 0;
}
