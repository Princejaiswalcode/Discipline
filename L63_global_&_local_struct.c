#include<stdio.h>
struct abc{
    int k;
    char l;
};
void sam()
{
    struct abc f;
    f.k=34;
    f.l='J';
    printf("%d,%c\n",f.k,f.l);
}
int main()
{
    struct pqr{
        int x,y;
        char m;
    };
    struct pqr l;
    l.x=10;
    l.y=10;
    l.m='A';
    printf("%d,%d,%c\n",l.x,l.y,l.m);
    struct abc N;
    N.k=30;
    N.l='G';
    printf("%d,%c\n",N.k,N.l);
    sam();
    return 0;
}