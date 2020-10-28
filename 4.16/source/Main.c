#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int y=0,x=1;
	printf("(A)\n\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(B)\n\n");
	for (int a = 10; a >= 1; a--) {
		for (int c = 1; c <= a; c++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(C)\n\n");
	for (int k = 10; k >= 1; k--) {
		
			for (int t = 0; t <= y; t++) {
				printf("%s", " ");
			}
			y += 1;
			for (int u = 1; u <= k; u++) {
				printf("%s", "*");
			}
		
		printf("\n");
	}

	printf("(D)\n\n");
	for (int r = 10; r >= 1; r--) {
		for (int h = 1; h < r; h++) {
			printf("%s", " ");
		}
		for (int q = 0; q < x; q++) {
			printf("%s", "*");
		}
		x += 1;
		printf("\n");
	}



	system("pause");
	return 0;
}