#include<stdio.h>
#include<string.h>
struct Address{
    char line1[34];
    char line2[45];
    char city[45];
    char country[45]
};
struct Student{
    int roll_no;
    char name[45];
    struct Address address;
};
int main()
{
    struct Student s;
    s.roll_no=101;
    strcpy(s.name,"Prince");
    strcpy(s.address.line1,"32/232");
    strcpy(s.address.line2,"Indira Nagar");
    strcpy(s.address.city,"Ujjain");
    strcpy(s.address.country,"India");
    printf("Roll number : %d\n",s.roll_no);
    printf("Name : %s\n",s.name);
    printf("Address : %s,%s,%s,%s\n",s.address.line1,s.address.line2,s.address.city,s.address.country);
    return 0;
}