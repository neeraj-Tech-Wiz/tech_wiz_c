#include<stdio.h>
void main() {
float farenheit,celcius;
printf("enter the temp in farenheit");
scanf("%f",&farenheit);
celcius=((farenheit-32)*5)/9;
printf("Temperature in celcius is %f= ",celcius);
}