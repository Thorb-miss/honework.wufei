#include<stdio.h>

int main(void)
{
    int term=1,i,sum;
    double sum=0;
    i=1;
    while(term >=1e-5)
    {
       term =term / i;
       sum  += term;
       i++;
    }

    sum+=1;
    printf("sum =%1f\n",sum);
    return 0;
}