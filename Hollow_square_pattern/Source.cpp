#include <stdio.h>
int main()
{
	int num[3];

	printf("Enter number : ");
	scanf_s("%d", &num[0]);
	num[1] = 1;
	for (num[1] = 1; num[1] <= num[0]; num[1]++)
	{
		if (num[1] == 1 || num[1] == num[0])
		{
			for (num[2] = 1; num[2] <= num[0]; num[2]++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("* ");
			for (num[2] = 1; num[2] <= num[0] - 2; num[2]++)
			{
				printf("  ");
			}
			printf("* ");
			printf("\n");
		}
	}
	return(0);
}