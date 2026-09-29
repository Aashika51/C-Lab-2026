#include <stdio.h>
int main(){

    int h,s,m;
    printf("Enter hours :");
    scanf("%d",&h);

    printf("Enter minutes :");
    scanf("%d",&m);

    printf("Enter seconds :");
    scanf("%d",&s);

    int time;
    time = h*3600 + m*60 + s;
    printf("Total time in seconds is %d.\n",time);

    return 0;
}