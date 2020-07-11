#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *h;
    int n;
    printf("enter the size of dynamic memory size allocation ");
    scanf("%d",&n);
    h=malloc(n);
    for(int i=0;i<n;i++)
        scanf("%d",&h[i]);
        printf("your elements are following as ");

    for(int i=0;i<n;i++)
        printf("%d\t",h[i]);

}
