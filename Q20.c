#include <stdio.h>
int main(){

    float a;
    printf("Enter the first number :");
    scanf("%f",&a);

    char op;
    printf("Enter the operation (+,-,*,/): ");
    scanf(" %c",&op);

    float b;
    printf("Enter the second number :");
    scanf("%f",&b);
    
    switch (op)
    {
    case '+':
       printf("Result is %.2f \n",a+b);
        break;

    case '-':
       printf("Result is %.2f \n",a-b);
       break;

    case '*':
       printf("Result is %.2f \n",a*b);
       break;
       
    case '/':
       if(b!=0){
       printf("Result is %.2f \n",a/b);
       break;
       }
       else{
        printf("Division not possible.\n");
       }

    default:
        break;
    }

    return 0;
}