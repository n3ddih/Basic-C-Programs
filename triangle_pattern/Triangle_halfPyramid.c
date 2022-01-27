#include <stdio.h>

void output(int r)
{
	for (int i=1;i<=r;i++)
	{
		for (int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}

int main()
{	
	int row;
	printf("Row number: ");
	scanf("%d", &row);
	output(row);
}