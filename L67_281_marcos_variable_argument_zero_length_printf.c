#include<stdio.h>
#define ABCD(x,...)\
printf("%d\n",x);\
printf(#__VA_ARGS__);
int main()
{
    ABCD(23,23,23,24,5);
    ABCD(47);
}