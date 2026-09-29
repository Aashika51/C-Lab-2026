#include <stdio.h>
int main(){

    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Small case letter.\n");
    }

    else if(ch>='A' && ch<='Z'){
        printf("Capital number.\n");
    }

    else if(ch>='0' && ch<= '9'){
        printf("A digit.\n");
    }

    else {
        printf("Symbol.\n");
    }

    return 0;
}