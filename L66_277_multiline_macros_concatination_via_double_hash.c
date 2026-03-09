//we have to concatinate the a,b,c,d to abcd thus we use ## btw them 
#include<stdio.h>
#define Club_it(a,b,c,d) a##b##c##d
int main()
{
    int p=10;
    int q=20;
    int s=50;
    int t=40;
    int pqst=p+q+s+t;
    printf("%d\n",Club_it(p,q,s,t));
    return 0;
}