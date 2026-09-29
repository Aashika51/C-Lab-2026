#include <stdio.h>
int main(){ // calculate total and percentage

    int a,b,c,d,e;
    printf("Enter the marks of five subjects :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int max;
    printf("Enter the maximum marks of the subject :");
    scanf("%d",&max);

    int sum;
    sum = a+b+c+d+e;

    int denominator;
    denominator= max*5;

    float percentage ; 
    percentage = sum*100.0/(denominator); 
   

    printf("Total of the marks is : %d",sum);
    printf("\n");
    printf("Percentage is : %.2f",percentage);

    return 0;
}