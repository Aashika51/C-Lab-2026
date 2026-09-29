#include <stdio.h>
int main(){ // a to the power b
    
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    int power =1;
    for(int i=1; i<=b;i++){
        power = power*a;
    }

    printf("%d to the power %d is %d.\n",a,b,power);

    return 0;
}