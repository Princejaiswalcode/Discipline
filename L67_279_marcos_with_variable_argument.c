//in this example we have seen how variable number of arguments in macros
//can replaced 
//we use (...) __VA__ARGS__ to replace all the given argument(...)
//(...) shows the n variable and __VA_ARGS__ as the argument 
#include<stdio.h>
#define ABCD(...) printf(#__VA_ARGS__)
int main()
{
    ABCD(10,20,30,40,50);//is as good as "10,20,30,40,50"
    return 0;
}