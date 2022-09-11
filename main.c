#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define FALSE 0 
#define TRUE 1

char RUN = TRUE;

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
int main(){
     
     while (RUN)
     {
        /* code */
        system("color 0A");
        printf("\t\t Hello Humans \t\t \n");
        printf("Tools available are:\n");
        printf("1:Timer\n");
        printf("2:Calculator(coming soon)\n");
        printf("3:Exit Program\n");

        char tool;
        scanf("\n %d",&tool);
        if(tool==1){
            timer();
        }
        else if(tool==3){
            RUN=FALSE;
            system("color 07");
        }
        char cLs[10];
        strcpy(cLs,"cls");
        system(cLs);
     }
     return 0;
}