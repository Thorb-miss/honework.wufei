#include<stdio.h>
int main(void)
{
    int n,sum=0,term,t;
    for(n=100;n<=999;n++)
    {
        sum=0;
        t=n;
        while(t>0)
        {
            term=t%10;
            sum+=term*term*term;
            t=t/10;
        }
        if(n=sum)
        {
            printf("%d",n);
        }
    }
    return 0;
}