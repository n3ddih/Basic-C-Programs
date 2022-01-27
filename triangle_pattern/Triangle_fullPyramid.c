#include <stdio.h>

void output(int a)
{
	int space,i,k;
	for (i=1; i<=a; i++,k=0) 
	{
        for (space=1; space<=a-i; space++)
        { 
			printf(" "); 
		}
        while (k!=2*i-1) 
		{
            printf("*");
            k++;
        }
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