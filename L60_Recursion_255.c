//head recusion
#include<stdio.h>
void sam(int p)
{
    if(p==4) return;
    printf("%d\n",p);
    sam(p+1);
}
int main()
{
    sam(1);
    return 0;
}