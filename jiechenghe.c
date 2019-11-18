#include<stdio.h>

int main(void)
{
    int n,i,r,sum;
    r=1;
    sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*i;
        sum=sum+r;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
