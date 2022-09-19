#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "timer.h"
#include "converter.h"

#define FALSE 0 
#define TRUE 1

char RUN = TRUE;

int main(){
     
     while (RUN)
     {
        /* code */
        system("color 0A");
        printf("\t\t Hello Humans \t\t \n");
        printf("Tools available are:\n");
        printf("1:Timer\n");
        printf("2:Currency Converter\n");
        printf("3:Exit Program\n");

        char tool;
        scanf("\n %d",&tool);
        if(tool==1){
            timer();
        }
        else if(tool==2){
            converter();
        }
        else if(tool==3){
            
            char cLs[10];
            strcpy(cLs,"cls");
            system(cLs);
            RUN=FALSE;
            system("color 07");
            printf("Console Cleared");
        }
     }
     return 0;
}