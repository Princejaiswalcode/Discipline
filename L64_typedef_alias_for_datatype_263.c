//usage of typedef is to define the alias for the data type 
//but we can call int as int ,even after int is set as iii
//no issue ,we can say that its the nickname and realname kind of thing 
     
#include<stdio.h>
typedef int iii;
int main()
{
    int x;
    iii y;
    x=10;
    y=2;
    printf("%d %d\n",x,y);
    return 0;
}