#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char You, char Computer){
if(You == Computer){
return 0;
}
if(You == 's' && Computer == 'w'){
return 1;
}
else if(You == 'w' && Computer == 's'){
return -1;
}
if(You == 'w' && Computer == 'g'){
return 1;
}
else if(You == 'g' && Computer == 'w'){
return -1;
}
if(You == 's' && Computer == 'g'){
return -1;
}
else if(You == 'g' && Computer == 's'){
return 1;
}
}
int main() {
char You, Computer;
srand(time(0));
int number = rand()%100+1;
if(number<33){
Computer = 's';
}
else if(number>33 && number<66){
Computer = 'w';
}
else{
Computer = 'g';
}
printf("Enter 's' for Snake.'w' for Water.And 'g' for Gun:\n");
scanf("%c",& You);
int result = SnakeWaterGun(You,Computer);
printf("You Chose %c and Computer Chose %c\n",You,Computer);
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