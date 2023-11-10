#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the size of the array :");
    scanf("%d",&m);
    int arr1[m],arr2[m];
    int *p,*q;
    printf("enter the elements of array 1:");
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("enter the elements of array 2:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    p=&arr1[0];q=&arr2[0];
        for(i=0;i<m;i++)
        {
            *p=(*q)+(*p);
            *q=(*p)-(*q);
            *p=(*p)-(*q);
            p=p+1;q=q+1;
        }

    printf("the swaped arrays are: \n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr2[i]);
    }


}