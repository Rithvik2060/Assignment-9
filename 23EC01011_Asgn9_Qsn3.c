#include<stdio.h>
void main()
{
    int n,x;
    printf("enter the array size :");
    scanf("%d",&n);
    int arr[n],*p;
    printf("enter the array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[0];
    int k=0;
    printf("enter the search element :");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==(*p))
        printf("%d is present at the %d position",x,i+1);
        else
        {
            k++;
        }
        p=p+1;
    }
    if(k==n)
    printf("not found ");
}



