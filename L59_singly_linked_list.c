#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
int roll_number;
char first_name[20];
char  last_name[20];
struct Student*next;
};
struct Student *p,*ptr,*start=NULL;
void display_student();
void add_student();
void search_student();
void update_student();
void delete_student();

void distroy_linked_list();
void printline();
int check(int);
void menu();

int main()
{
    menu();
    printf("\n\nExiting Application........\n\n");
    return 0;
}
void menu()
{
    int choice=0;
    do
    {
        printline();
        printf("-------------------School Application----------------\n");
        printline();
        printf("01. Display Student\n02. search Student\n03. Update Student\n04. Add Student\n05. Delete Student\n06. Exit Application\n\n");
        printline();
        printf("Enter choice :");
        scanf("%d",&choice);
        while(getchar()!='\n');
        switch(choice){
            case 1:
                display_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                update_student();
                break;
            case 4:
                add_student();
                break;
            case 5:
                delete_student();
                break;
            default :
                printf("invalid choice!!1...enter within range(1-6)\n\n");
                break;
        };
    }while(choice!=6);
}

void printline()
{
    printf("------------------------------------------------------\n");
}

int check(int roll)
{
    struct Student *p;
    p=start;
    while(p!=NULL)
    {
        if(p->roll_number==roll)
        {
            return 1;
        }
        p=p->next;
    }
    return 0;
}
void display_student()
{
    if(start==NULL)
    {
        printf("No student yet added!!");
        printf("Press enter to continue......");
        getchar();
        return;
    }
    ptr=start;
    printline();
    printf("Name\t\tRoll Nu  mber\n");
    printline();
    while(ptr!=NULL)
    {
        printf("%s %s\t\t%d\n",ptr->first_name,ptr->last_name,ptr->roll_number);
        ptr=ptr->next;
    }
    printline();
}
void add_student()
{
    int roll;
    printf("Enter New roll number :");
    scanf("%d",&roll);
    while(getchar()!='\n');
    if(check(roll))
    {
        printf("Roll number exit!!\n");
        printf("Press enter to Continue.........");
        getchar();
        return;
    }
    struct Student *t;
    t=(struct Student*)malloc(sizeof(struct Student));
    if(t==NULL) 
    {
        printf("space not allocated!!!\n");
        printf("Press enter to continue ........");
        getchar();
        return;
    }
    printf("enter first name : ");
    scanf("%s",t->first_name);
    printf("enter last name : ");
    scanf("%s",t->last_name);
    t->roll_number=roll;
    t->next=NULL;
    if(start==NULL)
        {
            start=t;
        }
    else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=t;
    }       
    printf("Student Successfully Added!!");    
    printf("press enter to continue......");
    getchar();
}
void search_student() {
    int roll;
    if(start==NULL)
    {
        printf("No student added to search!!!\n");
        printf("press enter continue.......");
        getchar();
        return;
    }
    printf("Enter roll : ");
    scanf("%d",&roll);
    while(getchar()!='\n');
    ptr=start;
    while(ptr!=NULL && ptr->roll_number!=roll)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("Student not found!!\n");
        return;
    }
    printf("Student Name \t ROll number\n");
    printf("%s %s\t%d\n",ptr->first_name,ptr->last_name,ptr->roll_number);
}

void update_student() {
    int roll;
    if(start==NULL)
    {
        printf("No student added to update the details!!!\n");
        printf("press enter to continue....");
        getchar();
        return;
    }
    printf("enter roll: ");
    scanf("%d",&roll);
    while(getchar()!='\n');
    ptr=start;
    while(ptr!=NULL && ptr->roll_number!=roll)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("Student not found!\n");
        return;
    }
    int choice=0;
    printf("01. Update First name\n02. UPdate Last name\n03.exit\n");
    while(choice!=3)
    {
        printf("Enter the choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                char f[20];
                printf("Enter New Fname : ");
                scanf("%s",f);
                getchar();
                strcpy(ptr->first_name, f);
                break;
            case 2:
                char l[20];
                printf("Enter New Fname : ");
                scanf("%s",l);
                getchar();
                strcpy(ptr->last_name, l);
                break;          
        };
    }
}

void delete_student()
{
    int roll;
    struct Student *prev = NULL;

    if(start == NULL)
    {
        printf("No student to delete!\n");
        getchar();
        return;
    }

    printf("Enter roll: ");
    scanf("%d",&roll);
    while(getchar()!='\n');

    ptr = start;

    while(ptr != NULL && ptr->roll_number != roll)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if(ptr == NULL)
    {
        printf("Student not found!\n");
        getchar();
        return;
    }

    if(prev == NULL)
        start = ptr->next;
    else
        prev->next = ptr->next;

    free(ptr);
    printf("Student deleted successfully!\npress enter to continue.......");
    getchar();
}
