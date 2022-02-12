#include<stdio.h>

 void main()
 {
     int num;
     printf("enter a no:");
     scanf("%d",&num);
     switch(num%2)
     {
         case 0:
         printf("%d is even",num);
         break;

         case 1:
         printf("%d is odd",num);
         break;
     }
 }
