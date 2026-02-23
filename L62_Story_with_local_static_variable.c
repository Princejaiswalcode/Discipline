#include<stdio.h>
void sam()
{
    static int x;
    printf("%d\n",x);
    x++;
}
int main()
{
    sam();
    sam();
    sam();
    return 0;
}