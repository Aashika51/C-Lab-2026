#include <stdio.h>
int main(){

    float x;
    printf("Enter the temperature in fahrenheit :");
    scanf("%f",&x);

    float c;
    c = (x - 32)*5.0/9;

    printf("Temperature in celsius is :%.2f",c);
    return 0;
}