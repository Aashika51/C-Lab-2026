#include <stdio.h>
int main(){

    float a,b,c,d,e;
    printf("Enter the marks of five subject :");
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);

    float sum,percentage;
    sum = a+b+c+d+e;
    percentage = sum/5;

    if(percentage>=60){
        printf("A division.\n");
    }
    else if(percentage>=50){
        printf("B division.\n");
    }
    else if(percentage>=40){
        printf("C division.\n");
    }
    else{
        printf("Fail.\n");
    }

    return 0;
}