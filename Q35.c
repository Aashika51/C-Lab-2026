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
    
    int SUM=0;
    if(sum>=10){
        
        while(sum!=0){
        ld =sum%10;
        SUM = SUM + ld;
        sum=sum/10;
        }

        printf("Single digit is :%d\n",SUM);
    }
    else{
        printf("Single digit is %d\n",sum);
    }
    
    return 0;
}