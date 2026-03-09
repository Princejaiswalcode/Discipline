#include<stdio.h>
#define WORD(w)\
char word_##w[]=#w
int main()
{
    WORD(one);
    WORD(two);
    WORD(three);
    printf("%s\n",word_one);
    printf("%s\n",word_two);
    printf("%s\n",word_three);
    return 0;
}