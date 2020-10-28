#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float loan=0,ans,rate;
	int days;
	while (loan != 1) {
		printf("Enter loan principal(-1 to end):"); 
		scanf_s("%f", &loan);
		if (loan == -1) 
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("term of the loan in days:");
		scanf_s("%d", &days);
		ans = loan * rate * days/365;
		printf("The interest charge is$%.2f\n",ans);
	}
	system("pause");
	return 0;
}