#include<stdio.h>
#define declareAndAssign(data_type,variable,value)\
data_type variable =value;

int main()
{
    declareAndAssign(int,x,100);
    declareAndAssign(char,a,'A');
    declareAndAssign(char,b[45],"Prince Jaiswal");
    printf("%d\n%c\n%s\n",x,a,b);
    return 0;
}