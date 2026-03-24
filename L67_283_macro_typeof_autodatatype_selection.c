#include<stdio.h>
#define LET(a,b)\
typeof(b) a=b;
int main()
{
    LET(x,10);
    LET(y,'C');
    LET(z,"Prince");
    printf("%d\n%c\n%s\n",x,y,z);
    return 0;
}