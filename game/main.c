#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int sum = 5000;

int a = 0;
int b = 0;
int c = 0;
int payment = 20;

do{
    a = rand() % 8;
    b = rand() % 8;
    c = rand() % 8;

    sum = sum - payment;

    if (a == 7 && b == 7 && c == 7){
        sum = sum + 400;
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("JACKPOT! 20X Balance: %d\n\n", sum);
        break;
    }
    else if (a == 6 && b == 6 && c == 6){
        sum = sum*0;
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("Bad luck. You got 666. Balance: %d\n\n", sum);
        break;
    }
    else if(a == b && b == c){
        sum = sum + 200;
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("You win 200 points. Balance: %d\n\n", sum);
    }
    else if (a == 5 || a == 7)
    {
        sum = sum + 40;
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("You win 40 points. Balance: %d\n\n", sum);
    }
    else if (a == 5 && b == 5 || a == 7 && b == 7)
    {
        sum = sum + 60;
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("You win 60 points. Balance: %d\n\n", sum);
    }
    else{
        printf("=|%d-%d-%d|= ", a, b, c);
        printf("Try again. Neutral combination. Balance: %d\n\n", sum);
    }   
}while (sum > 0);
}