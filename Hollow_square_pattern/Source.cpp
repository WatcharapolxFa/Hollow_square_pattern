#include<stdio.h>
int main()
{   
	
	int number = 0;
	printf("ENTER Number : ");
	scanf_s("%d", &number);
	for (int i = 0; i < number; i++)
	{
		printf("*");
		for (int f = 0; f < number; f++)
		{

			printf("\n");
		}
	}




	return 0;
}