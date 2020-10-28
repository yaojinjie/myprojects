#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j,x=0,y=0,z,w;
	printf("請輸入想呈現長方形的寬:");
	scanf_s("%d", &x);
	printf("請輸入想呈現長方形的長:");
	scanf_s("%d", &y);
	
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= y; j++) {
			if (i != 1 && j != 1 && i != x && j!=y) {
				printf(" ");
			}
			else {
				printf("*");
			}

		}
		printf("\n");
	}

	system("pause");
	return 0;
}