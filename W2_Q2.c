#include<stdio.h>

void main()
{

    int i,a[10],n, s1=0,s2=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
     printf("print the elements of array:");
     for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];

        }
    }
    printf("\n The sum of even numbers of array=%d\n",s1);
    printf("\n The sum of odd numbers of array=%d\n",s2);


}
