//what if we have to define the multiline macros
//we will put the \ at the end of each line of defination of macros
//example
#define print_greater(e,f)\
if(e>f) printf("%d\n",e);\
else printf("%d\n",f);\
//as good as print_greater(100,200) replaced with if-else block 
#include<stdio.h>
int main()
{
    print_greater(100,200);
    print_greater(2200,4000);
    return 0;
}