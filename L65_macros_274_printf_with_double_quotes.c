#include<stdio.h>
#define Double_Quote(e) #e
int main()
{
    //char a[]="\"GOD IS GREAT\"\n";
    char a[]=Double_Quote("GOD IS GREAT");
    printf("%s\n",a);
    return 0;
}