#include <stdio.h>
int main(){
    
    int x,n;
    printf("Enter the number :");
    scanf("%d",&x);

    printf("Enter the number of digits :");
    scanf("%d",&n);

    int sum =0;
    int ld;
    while(x!=0){
        ld =x%10;
        sum = sum + ld;
        x=x/10;
    }

    printf("Sum of individual digits is %d.\n",sum);
    
    return 0;
}