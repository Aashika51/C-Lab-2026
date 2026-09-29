#include <stdio.h>
int main(){

    int sec =31558150 ;
    

    int hr,min;
    hr = sec/3600;
    int remSec;
    remSec = sec%3600;
    min = remSec/60;
    int RemSec ;
    RemSec = remSec%60;

    printf("Total time is %d hr %d minutes and %d seconds.",hr,min,RemSec);

    return 0;
}