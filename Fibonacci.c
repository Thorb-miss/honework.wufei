#include<stdio.h>
int main(void)
{
    int i,n,m,sum;
    i=1;
    n=1;
    sum=0;
    printf("Enter n:\n");
    scanf("%d",&m);
    for(m=3;m<=100;m++)
    {
        sum=i+n+m;
    }
    printf("Sum is %d\n",sum);
    return 0;
}