#include<stdio.h>

int main(void)
{
    int i,n,f1=1,f2=1,f3;
    double fact;
    printf("Enter n:\n");
    scanf("%d",&n);

    printf("%d%d",f1,f2);
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        fact=f2*1.0/f3;
        f1=f2;
        f2=f3;
    }
    printf("%d",f3);
    
    return 0;
}