#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	char ch1='+';
	char ch2 = ' ';

	int le = 0, br = 0, a3 = 0;
	printf("Length : ");
	scanf_s("%d", &le);
	printf("breadth : ");
	scanf_s("%d", &br);
	for(a3=0;a3<le;a3++)
	{
		for (int i=0;i<br;i++)
		{
			if ((a3==0) || (a3==le-1))
			{
				printf("%c", ch1);
			}
			else if((a3!=0) && (a3!=le))
			{
				if ((i == 0)) 
				{
					printf("%c", ch1);
				}
				printf("%c", ch2);
				if(i==br-3)
				{
					printf("%c", ch1);
				}
			}
		}
		printf("\n");
	}
	printf("pause");
	return 0;
}