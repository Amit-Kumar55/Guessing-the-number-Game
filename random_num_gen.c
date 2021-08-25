#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int number, guess, nguesses =1;
    srand(time(0));
    number = rand()%100 + 1; //Generates a random number between 1 and 100 

    do
    {
        printf("Guess any number between 1 to 100 User\n");  
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");

        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("CONGRATULATIONS! You guessed it %d attempted user\n", nguesses);
        }
        nguesses++;
        
    } while(guess!=number);
    
    return 0;
}