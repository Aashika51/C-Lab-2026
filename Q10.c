#include <stdio.h>
int main(){

    int m;
    printf("Enter the  Marks in Mathematics out of 200 :");
    scanf("%d",&m);

    int p;
    printf("Enter the  Marks in physics out of 200 :");
    scanf("%d",&p);

    int c;
    printf("Enter the  Marks in chemistry out of 200 :");
    scanf("%d",&c);

    int e;
    printf("Enter the Marks in entrance examination out of 100  :");
    scanf("%d",&e);

    float cm;
    cm = m/2.0+p/2.0+c/2.0+e;
    printf("Cut off mark of the student is :%.2f\n ",cm);


    return 0;
}