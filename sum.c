#include<stdio.h>

int main(void)
{
    int i=0,n=0,sum=0;
    printf("Please input n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum is %d\n",sum);

    return 0;
}