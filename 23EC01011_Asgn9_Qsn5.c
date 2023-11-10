#include<stdio.h>
void main()
{
    int n;
    printf("enter the array size :");
    scanf("%d",&n);
    int arr[n],*p;
    printf("enter the array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[0];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*p;
        p=p+1;
    }
    printf("the sum of the elements of the array is %d",sum);
}