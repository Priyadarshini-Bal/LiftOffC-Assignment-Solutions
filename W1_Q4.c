#include<stdio.h>

void main()
{
    char ch;
    int x,y;
    printf("select the operators[+,-,*,/,%%]:");
    scanf("%ch",&ch);
    printf("enter two no:");
    scanf("%d%d",&x,&y);
    switch(ch)
    {
        case'+':
        printf("%d+%d=%d\n",x,y,x+y);
        break;

        case'-':
        printf("%d-%d=%d\n",x,y,x-y);
        break;

        case'*':
        printf("%d*%d=%d\n",x,y,x*y);
        break;

        case'/':
        printf("%d/%d=%d\n",x,y,x/y);
        break;

        case'%':
        printf("%d%%d=%d\n",x,y,x%y);
        break;

        default:
        printf("INPUT IS NOT VALID!");
}
}

