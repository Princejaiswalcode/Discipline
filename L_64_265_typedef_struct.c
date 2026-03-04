#include<stdio.h>
struct abc{
    int j;
    char m;
} g;//g is a structure of abc

typedef struct abc{
    int j;
    char m;
} ABCDEF;//ABCDEF is NOT a structure of abc
        //ABCDEF is a alias of struct abc

//we can give two name of alias for the same data type
struct pqe{
    int j;
} AD,BD;//AD, BD are the alias of struct pqe,not a strcuture of abc
int main()
{
    struct abc g;
    ABCDEF g;//both the one in the same thing
    return 0;
}