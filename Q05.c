#include <stdio.h> // swap by using third variable
int main(){

    int a,b;
    printf("Enter a(first number) :" );
    scanf("%d",&a);

    printf("Enter b(second number) :" );
    scanf("%d",&b);

    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("a is %d and b is %d.",a,b);
    printf("\n");

    return 0;
}
