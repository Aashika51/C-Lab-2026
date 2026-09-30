#include <stdio.h>
int main(){ // Swap without using third variable

    int a,b;
    printf("Enter a(first number) :" );
    scanf("%d",&a);

    printf("Enter b(second number) :" );
    scanf("%d",&b);

    a = a +b;
    b = a-b;
    a = a-b;

    printf("a is %d and b is %d.",a,b);
    printf("\n");

    return 0;
}
