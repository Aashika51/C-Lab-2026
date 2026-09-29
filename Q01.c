#include <stdio.h>
int main(){
    int x;
    printf("Enter the principal amount(in rupees) : ");
    scanf("%d",&x);

    int y;
    printf("Enter the rate of interest : ");

    scanf("%d",&y);

    int z;
    printf("Enter the time(in years) : ");
    scanf("%d",&z);

    float interest;
    interest = (x*y*z)/100;
    printf("Simple interest is : %.2f  ",interest);


    return 0;
}
