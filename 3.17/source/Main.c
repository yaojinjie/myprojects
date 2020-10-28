#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float account,balance,charges,credits,limit,newbalance;
	printf("Enter account number(-1 to end):");
	scanf_s("%f", &account);
	while(account > 0.00) {
		printf("Enter beginning balance:");scanf_s("%f", &balance);
		printf("Enter total charges:");scanf_s("%f", &charges);
		printf("Enter total credits:");scanf_s("%f", &credits);
		printf("Enter credit limit:");scanf_s("%f", &limit);
		newbalance = balance + charges - credits;
		if ( newbalance> limit) {
			printf("Account:     %.2f\n",account);
			printf("Credit Limit:%.2f\n",limit);
			printf("Balance:     %.2f\n" , newbalance);
			printf("Credit Limit Exceeded.\n\n");
		}
	}
	system("pause");
	return 0;
}