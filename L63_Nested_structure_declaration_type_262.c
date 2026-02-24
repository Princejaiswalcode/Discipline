#include<stdio.h>
//this below part of code is although correct but 
//generations the warning that means the declaration like this should be avoided


// struct pqr{
//     struct abc{
//         int x;
//     };
//     int y;
//     struct abc j;
// };


struct pqr{
    int c;
    struct abc {
        int l;
    }g;//if using the nested struct we must declare the structure like this (if we actually want it)
    char m;
};
int main(){
    struct pqr k;
    k.c=10;
    k.g.l=20;
    k.m='A';
    printf("%d,%d,%c\n",k.c,k.g.l,k.m);
    return 0;
}