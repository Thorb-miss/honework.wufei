#include<stdio.h>
int main(void)
{
    int x,y, z;
    for(x=1;x<=20;x++)
    for(y=1;y<=33;y++)
    for(z=3;z<=99;z++)
    {
        if((5*x+3*y+z/3==100)&&(x+y+z==100))
        printf("%d,y=%d,z=%d\n",x,y,z);

    }
    return 0;
}