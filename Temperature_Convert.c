#include<stdio.h>
int main (){
//Temperature 
    //Problem-Fahrenheit to Celsius->code by PRANTO;
            float fahrenheit;
            float celsius ;
            printf("Input the  fahrenheit temperature:");
            scanf("%f",&fahrenheit);
            celsius = (5*(fahrenheit-32)/9);
            printf("The celsius value is : %f",celsius);
            
            
            return 0;
}