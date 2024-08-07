#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0,i=0;
    printf("enter the name:");
    gets(name);
    puts(name);
    while(name[i]!='\0')
    {
        count++;
        i++;

    }
    printf("enter the string length:%d",count);
}
