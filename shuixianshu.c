#include<stdio.h>
int main(void)
{
    int n,sum,term,t;
    for(n=1000;n<=9999;n++)
    {
        sum=0;
        t=n;
        while(t>0)
        {
            term=t % 10;
            sum+=term*term*term*term;
            t=t/10;
        }
        if(n==sum)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}