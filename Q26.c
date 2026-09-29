#include <stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int sumeven =0;
    int sumodd=0;

    for(int i=0;i<=n;i++){
        if(i%2==0){
            sumeven = sumeven +i;
        }
        if(i%2!=0){
            sumodd = sumodd +i;
        }
    }

    printf("Sum of all even no is : %d.\n",sumeven);
    printf("Sum of all odd no is : %d.\n",sumodd);

    return 0;
}