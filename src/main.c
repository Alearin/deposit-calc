#include "deposit.h"

int main(){

    int term;
    int amount;

    printf("enter the term of the deposit\t");
    scanf("%d", &term);
    printf("enter the deposit amount\t");
    scanf("%d", &amount);

    int flag = Input_Validation(term, amount);
    if (flag == 0)
    	printf("Your income = %d\n", Calculation_of_income(term, amount));

    return 0;
}
