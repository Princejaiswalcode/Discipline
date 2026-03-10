#include<stdio.h>
#define ABCD(x,...)\
printf("%d\n",x);\
printf(#__VA_ARGS__);\
printf("\n");
int main()
{
    ABCD(10,20,30,405,03);
    ABCD(100,2004,3434,034,3433,4544);
    return 0;
}