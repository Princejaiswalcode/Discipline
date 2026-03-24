#include<stdio.h>
#define POINTER(a,b)\
typeof(b) *a=&b;
int main()
{
    int x;
    POINTER(y,x);
    x=10;
    printf("%d\n",x);
    *y=20;
    printf("%d\n",x);
    return 0;
}