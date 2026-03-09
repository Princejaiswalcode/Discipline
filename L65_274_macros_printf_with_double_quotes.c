//case: we hv to print the "god is great"...means printf(""god is great"")
//but this will show a error...as "" has ended and """god is great" two string intiated
//SOLUTION: use \ to remove the effect...
//use : "\"god is great"\"..will print ..."god is great"  
#include<stdio.h>
#define Double_quote(e) #e  ///this # means put the thing in double quotes
int main()
{
    char a[]=Double_quote("God is great");
    //the above one is as good as
    // printf("\"god is great\"");
    printf("%s\n",a);
    return 0;
}