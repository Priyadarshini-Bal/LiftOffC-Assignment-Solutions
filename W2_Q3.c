include<stdio.h>

void main()
{
int fd,ld,n,r=0,temp,swap,c,d,l,f;
printf(" enter the number:");
scanf("%d",&n);
temp=n;
ld=n%10;
while(n>10)
{
 n=n/10;
}
fd=n;
n=temp/10;
while(n>10)
{
    c=n%10;
    r=r*10+c;
    n=n/10;
    }
    swap=ld;
    while(r>0)
    {

        d=r%10;
        swap=swap*10+d;
        r=r/10;
    }
    swap=swap*10+fd;
    printf("after swap=%d",swap);

}
