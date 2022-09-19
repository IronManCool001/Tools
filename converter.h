#include <stdio.h>
#include <stdlib.h>

int converter(){
    int choice;
    printf("Choose the currency to convert: \n");
    printf("1) Rupees \n");
    printf("2) Dollar \n");
    printf("3) Yen \n");
    scanf("\n %d",&choice);
    int amount;
    printf("Enter Amount: ");
    scanf("\n %d",&amount);
    if(choice==1){
        int internalchoice;
        printf("Choose which currency to convert to \n");
        printf("1)Dollar \n");
        printf("2)Yen \n");
        scanf("\n %d",&internalchoice);
        if(internalchoice==1){
            amount = amount*0.013;
            printf("The amount in dollar will be: %d \n",amount);
        }
        else if(internalchoice==2){
            amount = amount*1.80;
            printf("The amount in yen will be: %d \n",amount);
        }
    }
    else if(choice==2){
        int internalchoice;
        printf("Choose which currency to convert to \n");
        printf("1)Rupees \n");
        printf("2)Yen \n");
        scanf("\n %d", &internalchoice);
        if(internalchoice==1){
            amount=amount*79;
            printf("The amount in ruppes will be: %d",amount);
        }
        else if(internalchoice==2){
            amount=amount*143.32;
            printf("The amount in yen will be: %d",amount);
        }
    }
    else if(choice==3){
        int internalchoice;
        printf("Choose which currency to convert to \n");
        printf("1)Rupees \n");
        printf("2)Dollar \n");
        scanf("\n %d",&internalchoice);
        if(internalchoice==1){
            amount=amount*0.56;
            printf("The amount in Rupees will be: %d",amount);
        }
        else if(internalchoice==2){
            amount = amount * 0.0070;
            printf("The amount in Dollar will be: %d",amount);
        }
    }
}