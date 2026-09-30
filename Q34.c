#include <stdio.h>
int main(){ // Fibonacci series till n terms

    int n;
    printf("Enter the number of terms :");
    scanf("%d",&n);

    int c=0;
    int a,b;
    a =0;
    b= 1;
    
    for(int i=0;i<=n;i++){

        printf("%d ",a);
        c = a+b;
        a =b;
        b=c;
        
    }

    return 0;
}