#include<stdio.h>

void main(){
    int x,y;
    printf("enter 2 numbers:",x,y);
    scanf("%d %d",&x,&y);
    if(x>y)
        {
            printf("%d is maximum .",x);
    }
    else if(x<y)
    {
            printf("%d is maximum. ",y);
    }
    else{
            printf("both the no.s are equal");
    }
}
