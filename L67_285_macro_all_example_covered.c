#include<stdio.h>
//a is x,b is first element for datatype and ... are other element of list
//same as int x={10,20,304,505,43}

#define LIST(a,b,...)\
typeof(b) a[]={b,__VA_ARGS__};\
typeof(b) a##_length =sizeof(a)/sizeof(b);

int main()
{
    int i;
    LIST(x,10,20,304,505,43);//will use to make a list
    printf("Length of list of array is %d\n",x_length);//will define it in macro for length of list
    for(int i=0;i<x_length;i++)//for proof of concern
    {
        printf("%d\n",x[i]);
    }
    return 0;
}