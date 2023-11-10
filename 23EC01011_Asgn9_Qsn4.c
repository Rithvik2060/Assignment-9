#include<stdio.h>
void main()
{
    char str[100],*p;
    printf("enter the string :");
    gets(str);
    p=&str[0];
    int strlen=0;
    for(int i=0;*p!='\0';i++)
    {
        strlen++;
        p=p+1;
    }
    printf("the length of the string is %d",strlen);
}