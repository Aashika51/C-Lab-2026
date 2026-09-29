#include <stdio.h>
int main(){

    int x;
    printf("Enter the net salary :"); // Net salary is the one you receive
    scanf("%d",&x);

    int y;
    printf("Enter the deduction amount :"); // Deduction amount involves all amount deducted for taxes etc
    scanf("%d",&y);

    int gs;
    gs = x+y;
    printf("The gross salary is : %d",gs);
    printf("\n");

    return 0;
}
