#include<stdio.h>

void main()
{
int i,n,fterm=0,sterm=1,tterm;
printf("enter the number of terms:" );
scanf("%d",&n);
printf("the fibonacci series %d terms is %d%d",n,fterm,sterm);
for(i=3;i<=n;i++)
 {
    tterm=fterm+sterm;
    printf("%d" ,tterm);
    fterm=sterm;
    sterm=tterm;

 }
   printf("\n");
}
