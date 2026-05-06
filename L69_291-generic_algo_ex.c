#include<stdio.h>
#include<string.h>

//this code is written by rohit 
//rohit knows the algorithm
//rohit is a designer of generic algorithm
//ptr2fun points to a function that accepts the 2 addresse and returns
//1 in case of the first argment is of lesser weight
//0 in case of the first argument is not of lesser weight
//rohit is not in position to perform comparsion
//hence rohit takes the addresses of a function that should perform comparision
//and tell that the first arguement is of lesser weight or not
void * get_smallest(void* p1,void* p2,void* p3, int (*ptr2fun)(void*,void*))
{
    int z;
    z=ptr2fun(p1,p2);
    if (z==1) {
        z=ptr2fun(p1,p3);
        if(z==1) return p1; else return p3;
    }
    else{
        z=ptr2fun(p2,p3);
        if(z==1) return p2; else return p3;
    }
}
struct Student{
    int roll_number;
    char name[20];
};
//this code is written by amit 
//amit doesnot knows the algorithms


int struct_student(void*left_operand,void*right_operand){
    //struct_student function takes two addresses as argument
    //type cast them into struct Student type
    //performs the comparison to the basis of roll number
    //returns either 0 or 1
    struct Student *l,*r;
    l=(struct Student*)(left_operand);
    r=(struct Student*)(right_operand);
    if(l->roll_number < r->roll_number) return 1;else return 0;
}

int int_comparator(void*left_operand,void*right_operand){
    //the int_comparator function takes two addresses as argument
    //then type casted both into int type
    //perform the comparsion based on number
    //returns either 1 or 0
    int *l,*r;
    l=(int*)left_operand;
    r=(int*)right_operand;
    if(*l<*r) return 1;else return 0;
}
int char_comparator(void* left_operand,void* right_operand){
    char *l,*r;
    l=(char*)left_operand;
    r=(char*)right_operand;
    if(*l<*r) return 1;else return 0;
}
int main()
{
    struct Student s1,s2,s3;
    int e,g,f;
    char a,b,c;
    void *result;
    struct Student *s;
    int *i;
    char *j;
    s1.roll_number=91;
    strcpy(s1.name,"Prince");
    s2.roll_number=20;
    strcpy(s2.name,"Millind");
    s3.roll_number=94;
    strcpy(s3.name,"Ekya");
    result=get_smallest(&s1,&s2,&s3,struct_student);
    s=(struct Student*)result;
    printf("The smallest info is %d %s\n",s->roll_number,s->name);
    

    e=100;
    g=30;
    f=40;
    result=get_smallest(&e,&g,&f,int_comparator);
    i=(int*)result;
    printf("The smallest number is %d\n",*i);
    
    a='M';
    b='C';
    c='Z';
    result=get_smallest(&a,&b,&c,char_comparator);
    j=(char *)result;
    printf("The smallest character is %c\n",*j);
    return 0;
}