#include <stdio.h>
int main(){

    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    int rev =0;
    int temp=n;
    while(n!=0){
        rev = rev*10;
        rev = rev + (n%10);
        
        n =n/10;
    }

    if(temp==rev){
        printf("Given number is a palindrome.\n");
    }
    else{
        printf("Not a palindrome.\n");
    }

    return 0;
}