#include <stdio.h>
#include <stdlib.h>

void maxmum(int, int[],int*,int*);

int main(void) {
	int total, num[20],test=-10000,x=1;

	printf("�п�J�ƦC�Ʀr���ƶq:");
	scanf_s("%d", &total);
	for (int i = 0; i < total; i++) {
		printf("��%d�Ӽ�:",i+1);
		scanf_s("%d", &num[i]);
	}
	maxmum(total,num,&test,&x);
printf("�̤j�Ȭ���%d���,�Ȭ�%d", x, test);
system("pause");
return 0;
}

void maxmum(int total, int num[],int *test,int *x) {

	for (int i = 0; i < total; i++) {
		if(num[i] >= *test) {
			*test = num[i];
			*x = i+1;
		}
	}
}