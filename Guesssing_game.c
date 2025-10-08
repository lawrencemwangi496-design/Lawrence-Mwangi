/*
Lawrence Gichuhi Mwangi
CT101/G/26436/25
Guessing_game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //seed random generator with changing values
    srand(time(0));
    int number=rand()%20+1;
     
   //prompt the user to guess  
 int guess;
printf("enter your guess:");
scanf("%d",&guess);
 
 
 //initilization of attempt
 int attempts=0;

while(guess!=number){
    
 //adds attempt when user gets wrong
    attempts++;
    
//checks if the guess is too high or low
     if(guess>number){
        printf("too high!\n");}
        
     else {printf("too low!\n");}
     
     
//prompts user to try again to repeat loop by updating guess
    printf("try again:");
    scanf("%d",&guess);
            
        
        }
        
  //addition of final attempt to get right      
    attempts++;
    
//print when user gets right
printf("congratulation\n, you got correct in %d guesses",attempts);
return 0;
}