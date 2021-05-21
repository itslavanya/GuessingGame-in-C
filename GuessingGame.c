#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess;
    srand(time(0));//time(0) returns the time in seconds.Every time when the program runs it generates a different random number
    number = rand()%100+1;//Generates random number b/w 1-100
    // printf("Number %d\n",number);
    nguess=1;
    //Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess > number){
            printf("Lower Number Please!\n");
        }
        else if(guess < number){
             printf("Higher Number Please!\n");
            
        }
        else{
            printf("You guessed it in %d attempts\n",nguess);
        }
        nguess++;

    }while (guess!=number);
    

}
