#include <stdio.h>
int main(){ // armstrong no or not

    int x;
    printf("Enter the number : ");
    scanf("%d",&x);

    int count =0;
    int ld ;
    int temp = x;
    while(temp!=0){ // counting the no of digits
        ld = temp%10;
        count++;
        temp = temp/10;

    }
    int sum = 0;
    temp = x;
    while(temp != 0){
        ld = temp % 10;
        int product = 1;
        
        for(int i =1;i<=count;i++){
            product = product *ld;
        }

        sum = sum + product ;
        temp = temp / 10;
    }

    if(x==sum){
        printf("%d is an armstrong number.\n",x);
    }
    else{
         printf("%d is not an armstrong number.\n",x);
    }


    return 0;
}