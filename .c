#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    
int main(){
int dice1,dice2,total;
srand(time(NULL));
    
printf("Rolling dice...\n");
    
dice1 = rand() % 6+1;
dice2 = rand() % 6+1;
total = dice1+dice2;
    
printf("Die 1: %d\n",dice1);
printf("Die 2; %d\n",dice2);
printf("total value: %d\n",total);

if(total>7)printf("You won");
else printf("You lost");
return 0;
}
