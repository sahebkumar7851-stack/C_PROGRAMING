#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempt=0;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("random number is : %d\n",number);
    while(number!=0){
        printf("enter guess number :");
        scanf ("%d",&guess);
        if(guess<number){
            printf("below,try again!\n");
            attempt++;
        }
        else if(guess>number){
            printf("ahead,try again!\n");
            attempt++;
        }
        else{
            printf("guess == number, \nyou won!");
            attempt++;
            break;
        }
    }
    printf("\nattempted = %d",attempt);
    return 0;
}