#include<stdio.h>
#include<string.h>
#define MAX 20
struct Student{
    int roll_number;
    char first_name[35];
    char last_name[35];
};
int choice=0;
int number_of_student=0;
struct Student k[MAX];
int menu();
void add_student();
void update_student();
void delete_student();
void search_student();
void display_list_of_student();
int position_in(int);
int main()
{
    do{
        menu();
        switch(choice)
        {
            case 1:
                display_list_of_student();
                break;
            case 2:
                add_student();
                break;
            case 3:
                update_student();
                break;
            case 4:
                search_student();
                break;
            case 5:
                delete_student();
                break;
        }

    }while(choice!=6);
    printf("logging out from the system......\n\n");
    return 0;
}

int menu()
{
    printf("menu\n01. Display List Of Student\n02. Add new student\n03. Update Student record\n04. Search student\n 05. Delete Student\n06. logout\n\n\n");
    printf("Enter action to be performed : ");
    scanf("%d",&choice);
    while(getchar()!='\n');
    if(choice<0 || choice>6)
    {
        printf("Enter code within the range(1-6)");
        menu();
    }
    return choice;
}
int position_in(int roll)
{
    int i;
    for(i=0;i<number_of_student;i++)
    {
        if(k[i].roll_number==roll)
            return i;
    }
    printf("No student with that roll number!!\ncheck roll number\n");
    printf("Press enter to continue....");
    getchar();
    switch (choice)
    {
        case 1:
            display_list_of_student();
            break;
        case 2:
            add_student();
            break;
        case 3:
            update_student();
            break;
        case 4:
            search_student();
            break;
        case 5:
            delete_student();
            break;
        default:
            break;
    }
    return -1;        
}
void add_student(){
    if (number_of_student >= MAX)
    {
        printf("Student list full!\n");
        return;
    }
    printf("Enter First Name : ");
    scanf("%s",&k[number_of_student].first_name);
    while(getchar()!='\n');
    printf("Enter Last Name : ");
    scanf("%s",&k[number_of_student].last_name);
    while(getchar()!='\n');
    printf("Enter roll_number : ");
    scanf("%d",&k[number_of_student].roll_number);
    while(getchar()!='\n');
    number_of_student++;
}
void update_student()
{
    int i=0,position=0,enter_roll=0;
    char first[35],last[35];
    printf("Enter Roll Number to continue : ");
    scanf("%d",&enter_roll);
    position=position_in(enter_roll);
    printf("01. Update First Name\n02. Update Last Name\n");
    printf("Enter Code To action performed : ");
    scanf("%d",&i);
    while(getchar()!='\n');
    switch(i){
        case 1:
            printf("Enter New First Name : ");
            scanf("%s",first);
            while(getchar()!='\n');
            strcpy(k[position].first_name, first);
            break;
        case 2:
            printf("Enter New last Name :");
            scanf("%s",last);
            while(getchar()!='\n');
            strcpy(k[position].last_name,last);
            break;
        default :
            printf("Enter within the range(1-2)!!\n");
            printf("press enter to continue....");
            update_student();
            break;
    }
    printf("Record updated successfully!\n");

}

void search_student()
{
    int i=0,position=0;
    printf("Enter Roll number : ");
    scanf("%d",&i);
    while(getchar()!='\n');
    position=position_in(i);
    if(position==-1)
        return;
    printf("Roll number\tFirst Name\tLast Name\n");
    printf("%d\t%s\t%s\n",k[position].roll_number,k[position].first_name,k[position].last_name);
}

void display_list_of_student()
{
    if (number_of_student==0){
        printf("No students found.\n");
        return;
    }
    int i;
    printf("Roll number\tFirst Name\tLast Name\n");
    for(i=0;i<number_of_student;i++)
    {
        printf("%d\t%s\t%s\n",k[i].roll_number,k[i].first_name,k[i].last_name);
    }
}