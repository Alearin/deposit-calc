#include <stdio.h>

void Input_Validation(int* term, int* amount){
	if (*term > 365)
		printf("incorrect data of term\n");
	if (*amount < 10000)
        printf("incorrect data of amount\n");
	
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
	
	return income;
}
		
void main(){

	int term;
	int amount;
	
	printf("enter the term of the deposit\t");
	scanf("%d", &term);
	printf("enter the deposit amount\t");
	scanf("%d", &amount);
	
	Input_Validation(&term, &amount);
	printf("%d\n", Calculation_of_income(&term, &amount));
}