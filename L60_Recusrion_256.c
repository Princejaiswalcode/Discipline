//example for tail recusrion
#include<stdio.h>
void sam(int p){
    if(p==5) return ;
    sam(p+1);
    printf("%d\n",p);

}
int main()
{
    sam(1);
    return 0;
}