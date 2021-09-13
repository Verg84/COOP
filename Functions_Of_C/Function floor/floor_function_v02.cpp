/********************************
         ROUND CONVERSION       *
*********************************/

#include<stdio.h>
#include<math.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreds(double number);
double roundToThousands(double number);

int main(){
    
    double userValue;
    printf("\t\t\t*** ROUND ***\n\n");
    
    printf("\t\t*Enter a number:");
    scanf("\t\t%lf",&userValue);
    
    printf("\t(x+0.5)\t\t(x*10+.5)/10\t\t(x*100+.5)/100\t\t(x*1000+.5)/1000\n");
    printf("\t\t--------------------------------------------------------------------\n");
    printf("\t%lf\t\t%lf\t\t%lf\t\t%lf",roundToInteger(userValue),roundToTenths(userValue),roundToHundreds(userValue),roundToThousands(userValue));
    
    printf("\n\n");
    return 0;

}

double roundToInteger(double number){

    return floor(number+0.5);
}

double roundToTenths(double number){
    
    return floor(number*10+0.5)/10;

}

double roundToHundreds(double number){

    return floor(number*100+0.5)/100;

}

double roundToThousands(double number){
    
    return floor(number*1000+0.5)/1000;

}
