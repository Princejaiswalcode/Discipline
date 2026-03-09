//if the value of x is above 50 assign 20 to y else assign 60 to  y
//we use statement expression
// syntax .....: ({expression})
//example
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter value x : ");
    scanf("%d",&x);
    y=({
        int z;
        if(x>50) z=40;
        else z=90;
        z;//after whole expression is evaluted,final value will be stored in this z
    });
    printf("%d\n",y);
    return 0;
}