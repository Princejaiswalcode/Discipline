#include<stdio.h>
#define boolean int
#define True 1
#define true 1
#define TRUE 1
#define false 0
#define FALSE 0
#define False 0

int main()
{
    int y;
    boolean x;//will be replaced by int x;
    x=TRUE;
    y=1;
    while(x){//will be replaced by true till y=4 and at y5 will be false
        printf("%d\n",y);
        if(y==5) break;
        y++;
    }

    return 0;
}