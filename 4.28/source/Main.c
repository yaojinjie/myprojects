#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code;
	int A;                      //A=�u�@�ɼ�
	float B, C, D, E, F, G;     //B=�@�P�~��,C=���~,D=��o�~��,E=�W�g�P���B;
								//F=�s�y�����S��,G=�Ӽ�
	printf("�п�J���u�N�X:");
	scanf_s("%d", &code);

	switch (code)
	{
	case(1):
		printf("�п�J�@�g�~�����h��:");
		scanf_s("%f", &B);

		D = B;
		printf("�Ӷg�~����%.2f\n", D);
		break;

	case(2):
		printf("�Ш̧ǿ�J���~�B�u�@�ɼ�(�����H�ťն��j):");
		scanf_s("%f%d", &C, &A);

		if (A <= 40)
		{
			D = A * C;
		}
		else
		{
			D = (40 * C) + (A - 40) * (1.5 * C);
		};
		printf("�Ӷg�~����%.2f\n", D);
		break;

	case(3):
		printf("�п�J�W�g�`�P���B:");
		scanf_s("%f", &E);

		D = 250 + (0.057) * (E);
		printf("�Ӷg�~����%.2f\n", D);
		break;

	case(4):
		printf("�W�g�s�y���~�i����B(�@��)��:");
		scanf_s("%f", &F);
		printf("�W�g�s�y�F�X��:");
		scanf_s("%f", &G);

		D = F * G;
		printf("�Ӷg�~����%.2f\n", D);
		break;

	default:
		printf("�d�L�����u�N�X\n");
		break;
	}

	system("pause");
	return 0;
}