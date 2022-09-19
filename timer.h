#include <stdio.h>
#include <stdlib.h>

int timer(){
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    for (int i=1;i<=seconds;i++){
        printf("%d\n",i);
        _sleep(1000);
    }
    printf("Timer Ended");
}