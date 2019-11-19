#include<stdio.h>

int main(void)
{
    int term=1,n,i,sum;
    double sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       term =term / i;
       sum  += term;
    }
    sum+=1;
    printf("sum =%1f\n",sum);
    return 0;
}