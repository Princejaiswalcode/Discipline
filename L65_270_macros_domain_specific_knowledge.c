#include<stdio.h>
#define Range_Loop(variable,e,f,g) for(variable=e;variable<=f;variable+=g){
#define End_Loop }
int main()
{
    int x;
    Range_Loop(x,1,10,2)
        printf("%d\n",x);
    End_Loop
    return 0;
}