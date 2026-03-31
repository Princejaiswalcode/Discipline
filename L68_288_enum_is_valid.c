#include<stdio.h>
enum DIFFICULTY{EASY,NORMAL,HARD};
int is_vaild_level(enum DIFFICULTY level)
{
    switch(level){
        case EASY:
        case HARD:
        case NORMAL:
            return 1;
        default:
            return 0;
    }; 
}

void take_quiz(enum DIFFICULTY level){
    if(!is_vaild_level(level)) printf("invaild diffculty level entered\n");
    else{
            if(level==EASY) printf("logic for the easy level difficulty\n");
            else if(level==HARD) printf("logic for the hard level difficulty\n");
            else if (level==NORMAL) printf("logic for the normal level diffivculty\n");
    }

}
int main()
{
    take_quiz(EASY);
    take_quiz(6);
    return 0;
}