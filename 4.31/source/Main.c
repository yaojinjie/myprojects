#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int x=1, y, z,q=1;

	for (int i = 5; i >= 1; i--) {
		z=y = i - 1;
		for (y; y >= 1; y--) {
			printf(" ");
		}
		for (int r=1; r <= x; r++) {
			printf("*");
		}
		x+=2;
		for ( z; z >= 1; z--) {
			printf(" ");
		}
		printf("\n");
	}
	for (int u = 1; u <= 4; u ++ ) {
		for (int d = 1; d <= u; d++) {
			printf(" ");
		}
		for (int g = 7; g >= q; g--) {
			printf("*");
		}
		q+=2;
		printf("\n");
	}


}
