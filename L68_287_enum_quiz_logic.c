#include<stdio.h>
enum DIFFICULTY_LEVEL{EASY,HARD,MEDIUM};
void take_quiz(enum DIFFICULTY_LEVEL level){
    if(level==EASY) printf("Logic for the easy difficulty level\n");
    else if(level==HARD) printf("LOgic for the hard difficulty level\n");
    else if(level==MEDIUM) printf("Logic for the medium level difficulty\n");; 
}

int main()
{
    take_quiz(EASY);
    take_quiz(1);//this is issue AS one can pass any integer here ...which is not handled in 
    //which is not handled in this code.....L68_288_enum_is_valid.c 
    return 0;
}