#include<stdio.h>
int get_smallest(int a,int b,int c){
    int i =(a<b)?a:b;
    return (i<c)?i:c;
}

int main()
{
    printf("%d\n",get_smallest(10,20,5));
    return 0;
}