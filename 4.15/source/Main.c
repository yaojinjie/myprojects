#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int years;           //�~��
	float rates;         //�~��
	float temp = 1;        //�ƧQ�p��
	float A;             //�̲�$

	for (rates = 10; rates <= 12; rates += 0.5)
	{
		for (years = 1; years <= 15; years++)
		{
			temp = temp * (1 + (rates * 0.01));
		}

		A = 5000 * temp;
		printf("�~�Q�v%.2f���̲ת��B��%.2f\n", rates, A);
		temp = 1;
	}

	system("pause");
	return 0;
}