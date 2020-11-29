#include <stdio.h>
#include <stdlib.h>
void judge(int,char[]);
int main(void) {
	char num[20];
	printf("½Ð¿é¤J¦r¦ê:");
	scanf_s("%s", &num, 20);
	judge(0,num);
	system("pause");
}
void judge(int total,char num[]) {
		if ( num[total+1] != '\0') {
			judge(total+1,num);
		}
		printf("%c", num[total]);
}