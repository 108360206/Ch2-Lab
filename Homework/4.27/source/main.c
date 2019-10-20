#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 = 0,a2=0;
	float hypotenuse = 0, b1 = 0, sum=0, b3, b4, b5;
	printf("hypotenuse lengh :");
	for (int i = 1; i < 500; i++)
	{
		for (int z = 1; z < 500; z++)
		{
			sum = (i*i) + ( z * z);
			for (int x = 1; x < 500; x++)
			{
				hypotenuse = x * x;
				if (sum == hypotenuse)
				{
					printf(" %d", x);
				}
			}
		}
	}
	//printf("hypotenuse lengh :");
	printf("\npause");
	return 0;
}