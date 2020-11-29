#include <stdio.h>
#include <stdlib.h>

int binary(int n, int search, int all[]);

int main(void) {
	int n, search, all[] = {0},ans;
	printf("請輸入要排列數字的數量:");
	scanf_s("%d",&n);
	printf("請輸入數列(須按大小排序):");
	for (int j = 0; j < n; j++) {
		scanf_s("%d", &all[j]);
	}
	for (int i = 0; i < n; i++) {
		printf("number%d:%d \n",i,all[i]);
	}
	printf("請輸入要找尋的數:");
	scanf_s("%d", &search);
	ans=binary(n, search, all);

	if (ans > 0) {
		printf("第%d位\n", ans);
	}
	else {
		printf("查無此數\n");
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