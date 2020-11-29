#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int total[13] = {0}, rand1, rand2, key;
	for (int i = 1; i < 36000; i++) {
		rand1 = 1 + (rand() % 6);
		rand2 = 1 + (rand() % 6);
		key = rand1 + rand2;
		total[key] += 1;
	}
	for (int q = 2; q <= 12; q++) {
		printf("合為%d的值有%d個\n",q, total[q]);
	}


	system("pause");
	return 0;
}