#include <stdio.h>

void output(int r)
{
	for (int i=r;i>=1;i--)
	{
		for (int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}

int main()
{
	printf("Row number: ");
	int row;
	scanf("%d", &row);
	output(row);
}