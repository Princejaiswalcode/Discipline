#include<stdio.h>
void __compute_sum_diff(int p,int q,int*r,int *s)
{
    *r=p+q;
    *s=p-q;
}
#define compute_s(av,b,n,m) __compute_sum_diff(av,b,&n,&m)

int main()
{
    int x,y,a,b;
    x=10;
    y=5;
    compute_s(x,y,a,b);
    printf("sum is %d\n",a);
    printf("difference is %d\n",b);
    return 0;
}