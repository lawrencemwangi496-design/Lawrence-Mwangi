/*
Lawrence Gichuhi Mwangi
CT101/G/26436/25
password
*/
#include <stdio.h>
int password;



int main(){
    //do while loop
    do{
        //prompt user for password
        printf("enter password:");
        scanf("%d",&password);
 
        
        
    }
    //checks if its true or false
    while(password!=1234);
    
   //print granted when the condition is false 
    printf("Access granted");
    
   
return 0;
}