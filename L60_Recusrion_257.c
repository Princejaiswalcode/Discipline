//factorial using recursion
#include<stdio.h>
int factorial(int n)
{
    if(n==1) return 1;
    return factorial(n-1)*n;
}
int main()
{
    int x,y;
    printf("Enter a number to calucalte its factorial : ");
    scanf("%d",&x);
    while(getchar()!='\n');
    y=factorial(x);
    printf("Factorial of %d is %d\n",x,y);
    return 0;
}