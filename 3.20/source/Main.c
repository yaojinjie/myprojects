#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int hours=0,a;
	float money=0,total,b;
	while (hours != -1) {
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &money);
		if (hours <= 40) {
			total = money * hours;
		}
		if (hours > 40) {
			a = hours - 40;
			b = a * money * 1.5;
			total = money * 40;
			total = total + b;
		}
		printf("Salary is $%.2f\n", total);
	}
	system("pause");
	return 0;
}