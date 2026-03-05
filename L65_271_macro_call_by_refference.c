//call by reffernece exampple///base for next example 272.c
#include<stdio.h>
void compute_sum_and_difference(int p,int q,int*r,int*s){
    *r=p+q;
    *s=p-q;
}
int main()
{
    int x,y,a,b;
    x=10;
    y=5;
    compute_sum_and_difference(x,y,&a,&b);
    printf("summ is %d\n",a);
    printf("difference is %d\n",b);
    return 0;
}