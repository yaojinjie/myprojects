#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int years;           //年數
	float rates;         //年息
	float temp = 1;        //複利計算
	float A;             //最終$

	for (rates = 10; rates <= 12; rates += 0.5)
	{
		for (years = 1; years <= 15; years++)
		{
			temp = temp * (1 + (rates * 0.01));
		}

		A = 5000 * temp;
		printf("年利率%.2f的最終金額為%.2f\n", rates, A);
		temp = 1;
	}

	system("pause");
	return 0;
}