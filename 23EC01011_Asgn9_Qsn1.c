#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the value a,b :");
    scanf("%d%d",&a,&b);
    printf("the values are a=%d and b=%d",a,b);
    int *p,*q;
    p=&a;q=&b;
    int fun(int m,int n);
    fun(*p,*q);
    printf("\nthe values after exchange are a=%d and b=%d",*p,*q);

}

int fun(int m,int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    return m,n;
}