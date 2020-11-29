#include <stdio.h>
#include <stdlib.h>

int binary(int n, int search, int all[]);

int main(void) {
	int n, search, all[] = {0},ans;
	printf("�п�J�n�ƦC�Ʀr���ƶq:");
	scanf_s("%d",&n);
	printf("�п�J�ƦC(�����j�p�Ƨ�):");
	for (int j = 0; j < n; j++) {
		scanf_s("%d", &all[j]);
	}
	for (int i = 0; i < n; i++) {
		printf("number%d:%d \n",i,all[i]);
	}
	printf("�п�J�n��M����:");
	scanf_s("%d", &search);
	ans=binary(n, search, all);

	if (ans > 0) {
		printf("��%d��\n", ans);
	}
	else {
		printf("�d�L����\n");
	}

}

int binary(int n,int search,int all[]) {
	int ans,mid,low,high;
	low = 0; high = n - 1;
	while (low<=high) {
		mid = (low + high) / 2;
		if (search == all[mid]) {
			ans = mid;
			low =high+1;
		}
		else if (search > all[mid]) {
			high += 1;
		}
		else if (search < all[mid]) {
			high -= 1;
		}
	}
	return (ans+1);
}