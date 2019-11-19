#include<stdio.h>
double fact;
int main(void)
{
    int n,i;
    double e,term;
    printf("Enter n:\n");
    scanf("%d",&n);
    e=1;
    for(i=1;i<=n;i++){
        fact=1;
        for(n=1;n<=i;n++)
        if(e<1e-5)
        fact=fact*n;
        term=1.0/fact;
        e=e+term;
    }
    printf("e=%f\n",e);
    return 0;
}