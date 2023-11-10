#include<stdio.h>
void main()
{
    char str[100];
    printf("enter the string : ");
    gets(str);
    char *p;
    p=&str[0];
    int cons=0,vow=0;
    for(int i=0;*p!='\0';i++)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
    {vow=vow+1;}
    else if(*p==' ')
    {vow=vow+0;cons=cons+0;}
    else
    {cons=cons+1;}
    p=p+1;
    }
    printf("the number of consonents and vowels are %d and %d respectively",cons,vow);
}