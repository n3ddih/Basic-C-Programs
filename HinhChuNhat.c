#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dai,rong,i,j;
	printf("dai? ");
	scanf("%d",&dai);
	printf("rong? ");
	scanf("%d",&rong);
	system("cls");
	for (i=0;i<rong;i++)
	{
		for (j=0;j<dai;j++)
			printf("*");
		printf("\n");
	}
}
