#include<stdio.h>
#define greaterof(e,f) (e>f)? e:f
int main()
{
    int x,y;
    x=10;
    y=20;
    printf("Grerater number is %d\n",greaterof(x,y));
    return 0;
}