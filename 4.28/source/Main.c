#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code;
	int A;                      //A=工作時數
	float B, C, D, E, F, G;     //B=一周薪水,C=時薪,D=實得薪水,E=上週銷售額;
								//F=製造物之酬勞,G=個數
	printf("請輸入員工代碼:");
	scanf_s("%d", &code);

	switch (code)
	{
	case(1):
		printf("請輸入一週薪水為多少:");
		scanf_s("%f", &B);

		D = B;
		printf("該週薪水為%.2f\n", D);
		break;

	case(2):
		printf("請依序輸入時薪、工作時數(中間以空白間隔):");
		scanf_s("%f%d", &C, &A);

		if (A <= 40)
		{
			D = A * C;
		}
		else
		{
			D = (40 * C) + (A - 40) * (1.5 * C);
		};
		printf("該週薪水為%.2f\n", D);
		break;

	case(3):
		printf("請輸入上週總銷售額:");
		scanf_s("%f", &E);

		D = 250 + (0.057) * (E);
		printf("該週薪水為%.2f\n", D);
		break;

	case(4):
		printf("上週製造物品可獲金額(一個)為:");
		scanf_s("%f", &F);
		printf("上週製造了幾個:");
		scanf_s("%f", &G);

		D = F * G;
		printf("該週薪水為%.2f\n", D);
		break;

	default:
		printf("查無此員工代碼\n");
		break;
	}

	system("pause");
	return 0;
}