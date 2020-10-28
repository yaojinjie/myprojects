#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	int e = 1;
	int	d = 0;

	printf("三邊長皆為整數的三角形有:\n");

	for (a = 1; a < 500; a++)
	{
		for (b = a; b < 501; b++)
		{
			for (c = b + 1; c < 501; c++)
			{
				d = pow(a, 2) + pow(b, 2) - pow(c, 2);
				if (d == 0)
				{
					if ((e % 6) == 0)
					{
						printf("%d,%d,%d\t\n", a, b, c);
						e = 1;
					}
					else
					{
						printf("%d,%d,%d\t", a, b, c);
						e++;
					};
				};
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}