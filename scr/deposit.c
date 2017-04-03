#include <stdio.h>
#include "deposit.h"

int Input_Validation(int* term, int* amount){
    if ((*term > 365) || (*term <= 0)){
        printf("incorrect data of term\n");
        return -1;
    }
    if (*amount < 10000){
        printf("incorrect data of amount\n");
        return -1;
    }
	return 0;
}

int Calculation_of_income(int* term, int* amount){

    int income = 0;

    if(*amount < 100000){
        if(*term <= 30){
            income = *amount * 0.9;
        }
        else if((*term >= 31)  && (*term <= 120)){
            income = *amount * 1.02;
        }
        else if((*term >= 121)  && (*term <= 240)){
            income = *amount * 1.06;
        }
        else if((*term >= 241)  && (*term <= 365)){
            income = *amount * 1.12;
        }
    }

    if(*amount > 100000){
        if(*term <= 30){
            income = *amount * 0.9;
        }
        else if((*term >= 31)  && (*term <= 120)){
            income = *amount * 1.03;
        }
        else if((*term >= 121)  && (*term <= 240)){
            income = *amount * 1.08;
        }
        else if((*term >= 241)  && (*term <= 365)){
            income = *amount * 1.15;
        }
    }

    return income;
}


