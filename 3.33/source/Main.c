#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j,x=0,y=0,z,w;
	printf("�п�J�Q�e�{����Ϊ��e:");
	scanf_s("%d", &x);
	printf("�п�J�Q�e�{����Ϊ���:");
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