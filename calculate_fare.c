/*
Lawrence Gichuhi Mwangi
CT101/G/126436/25
CALCULATES FARE

*/
#include <stdio.h>

//function that calculates fare
double calculate_fare(double distance){
return distance*50;
}

int main(){
//variable decleration
double distance,total;

//rpompt user for info
printf("enter the distance travllled: ");
scanf("%lf",&distance);

total=calculate_fare(distance);

printf("the total fare is ksh%.2lf",total);



    return 0;

}