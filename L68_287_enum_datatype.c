#include<stdio.h>

int main()
{
    enum DIRECTION{EAST=1,WEST=7,NORTH,SOUTH};
    printf("%d\n",EAST);
    printf("%d\n",WEST);
    printf("%d\n",NORTH);
    printf("%d\n",SOUTH);
    return 0;
}