#include<stdio.h>

int main()
{
    int a[2][2],b[2][2],sum=0,product=1,i,j;
    printf("enter the number for the first 2*2 array:");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
   printf("enter the number for the second 2*2 array:");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" ,&b[i][j]);
        }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("%d",b[i][j]);
        }
        printf("\n");
    }
      printf(" sum matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=a[i][j] +b[i][j];
        printf("%d",sum);
        }
        printf("\n");
    }
     printf(" the product matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            product=a[i][j]*b[i][j];
        printf("%d",product);
        }
        printf("\n");
    }

    return 0;
}
