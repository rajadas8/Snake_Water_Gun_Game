// Simple Project 2: Snake Water Gun Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char You,char Computer){
    if(You == Computer) return 0;
    if((You == 's') && (Computer == 'w')){
        return 1;
    }
    else if((You == 'w') && (Computer == 's')){
        return -1;
    }
    if((You == 'w') && (Computer == 'g')){
        return 1;
    }
    else if((You == 'g') && (Computer == 'w')){
        return -1;
    }
    if((You == 'g') && (Computer == 's')){
        return 1;
    }
    else if((You == 's') && (Computer == 'g')){
        return -1;
    }
    return 0;
}
int main(){
    printf("----------Welcome to the Snake Water Gun Game----------\n");
    char You,Computer;
    srand(time(0));
    int num = rand() % 100+1;
    if(num < 33){
        Computer = 's';
    }
    else if(num < 66){
        Computer = 'w';
    }
    else{
        Computer = 'g';
    }
    printf("I have chosen a Character in between 's','w'or'g'\n");
    printf("Enter 's' for Snake,'w' for Water,And 'g' for Gun: ");
    scanf(" %c",&You);
    int result = SnakeWaterGun(You,Computer);
    printf("You chose %c and Computer chose %c\n",You,Computer);
    if(result == 0){
        printf("Game Draw!\n");
    }
    else if(result == 1){
        printf("You Win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    return 0;
}