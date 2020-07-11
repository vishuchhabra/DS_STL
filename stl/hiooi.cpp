#include<stdio.h>
int main(int argc,char *argv[])
{

    int j=2;
    for(int i=0;i<argc;i++)
    {
     j=j+atoi(argv[i]);

    }
    printf("%d",j);
    return 0;
}
