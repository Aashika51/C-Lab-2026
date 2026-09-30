#include <stdio.h>
int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }

    if(a==0){
        printf("Prime number.\n");
    }
    else{
        printf("Not a prime number.\n");
    }

    if(n==1){
        printf("Neither prime nor composite number.");
    }


    return 0;
}