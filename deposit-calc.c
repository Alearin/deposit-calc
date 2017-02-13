#include <stdio.h>

void Input_Validation(int* term, int* amount){
	if (*term > 365)
		printf("incorrect data of term\n");
	if (*amount < 10000)
        printf("incorrect data of amount\n");
	
}
		
void main(){

	int term;
	int amount;
	
	printf("enter the term of the deposit\t");
	scanf("%d", &term);
	printf("enter the deposit amount\t");
	scanf("%d", &amount);
	
	Input_Validation(&term, &amount);
}