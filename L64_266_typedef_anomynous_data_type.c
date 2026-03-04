#include<stdio.h>
typedef struct{//no name defined here,thus 
                //can be called using alias name or structures(nnot scope of this example)
    int x;
} ABCDF;
int main()
{
    ABCDF g;//g is structure of ABCDF or 
            // g is structure of annomynous data type of struct
    g.x=10;
    printf("%d\n",g.x);
    return 0;
}