/*
Lawrence Gichuhi Mwangi
CT101/G/26436/25
CONVERT TEMP
*/

#include <stdio.h>

//function that convert temp from farenheit to celcius
double converttocelcius(double temparature){

    double celcius=(temparature-32)*5/9;
    return celcius;
}

int main(){
 //variable declaration   
double temparature,converted;
 
//prompt user for input
printf("enter the temparature to convert from farenheit to celcius: ");
scanf("%lf",&temparature);

converted=converttocelcius(temparature);

printf("the temparature in celcius is %.2f",converted);
return 0;
}
