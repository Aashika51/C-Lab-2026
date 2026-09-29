#include <stdio.h>
int main(){

    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
  
    ch >= 'a' && ch <='z' ? printf("Small case letter.\n") : printf("Not a small case letter.\n");
    
    return 0;
}