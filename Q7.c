#include <stdio.h>
#include <math.h>
int main(){

    int a,b,c;
    printf("Enter the length of first side = ");
    scanf("%d",&a);

    printf("Enter the length of second side = ");
    scanf("%d",&b);

    printf("Enter the length of third side = ");
    scanf("%d",&c);

    float s,area;
    s= (a+b+c)/2.0;

    area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
    printf("Area of the triangle is :%.2f",area);

    return 0;
}