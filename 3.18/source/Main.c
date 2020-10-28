#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float oldsalary,newsalary;
	printf("Enter sales in dollars(-1 to end):"); scanf_s("%f", &oldsalary);
	newsalary = 200 + (oldsalary * 0.09);
	if(oldsalary != -1) {
		printf("Salary is: $%.2f\n" , newsalary);
	}
	system("pause");
	return 0;
}