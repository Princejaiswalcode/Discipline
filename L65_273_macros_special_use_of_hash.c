#include<stdio.h>
//this # before e is reason that make god is great to "god is great"
//i.e. in strings
#define SLOGAN(e) #e
int main()
{
    //it is as good as char a[]="GOD IS GREAT";
    char a[]=SLOGAN(GOD IS GREAT);
    printf("%s\n",a);
    return 0;
}