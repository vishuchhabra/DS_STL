#include<stdio.h>
#include<conio.h>
int main()
{

    char c[60]={'\0'};
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='c'&&c[i+3]=='c'&&c[i+7]=='a')
        {

            printf("Kolkata ");
            i+=7;

        }
        else
            printf("%c",c[i]);

    }
}
