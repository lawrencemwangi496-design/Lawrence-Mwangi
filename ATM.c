#include <stdio.h>
/*
Lawrence Gichuhi Mwangi
CT101/G/26436/25
ATM
*/
int main(){

int balance;
int amount_withdraw;

printf("enter balance:");
scanf("%d",&balance);


while(balance>0){
    
    printf("your balance is %d\n",balance);
    printf("enter amount to withdraw:");
    scanf("%d",&amount_withdraw);
    
    balance=balance-amount_withdraw;
    
    
}
printf("insufficient funds\n");
return 0;
    
}