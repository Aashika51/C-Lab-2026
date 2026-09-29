#include <stdio.h>
int main(){

    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);

    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    float y;
   
    if(n==1){
        y = 1+x;
        printf("%.2f",y);
        
    }
    else if(n==2){
        y = 1 + (float)x/n;
        printf("%.2f",y);
    }
    else if(n==3){
        int product;
        for(int i=1;i<=n;i++){
            product = product *x;
        }
        y = 1+ product;
        printf("%.2f",y);
    }
    else if(n>3 || n<1){
        y = 1+n*x;
        printf("%.2f",y);
    }

    else {
        printf("Not Applicable.");
    }

    return 0;
}