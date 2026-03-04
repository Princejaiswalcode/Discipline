
//example for the type def for char  [20] size
#include<stdio.h>
#include<string.h>
int main()
{
    //what we want is to make a data type that has char of size 20 
    //what we do is char name[30] ,in normal cases
    //same will be done to make a data type of the requirement stated before
    //as name could be used normally for a variable,we apply two underscore before the name
    //to avoid the confusion btw variable and data type declaration
    typedef char __name[20];
    __name surname;//would be treated as char surname[20];
    printf("%llu\n",sizeof(surname));
    printf("%llu\n",sizeof(__name));
    strcpy(surname,"jaiswal");
    printf("surname is %s\n",surname);

    //what we want is to make a data type that has 2-d char of size 10 20
    __name name[10];//this is as good as char name[10][20]
    printf("%llu\n",sizeof(name[0]));//size of 0th index of 2-d char
    printf("%llu\n",sizeof(name));//size of whole 2-d char
    return 0;


}