#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void halfPyramid(int a);
void invertHalfPyramid(int a);
void fullPyramid(int a);

int main()
{
	int row;
	printf("Number of row? ");
	scanf("%d",&row);
	system("cls");
	//halfPyramid(row);
	//invertHalfPyramid(row);
	fullPyramid(row);
}

void halfPyramid(int a)
{
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=i;j++)
		{
			//printf("*");
			printf("%d",j);  //number half pyramid
		}
		printf("\n");
	}
}

void invertHalfPyramid(int a)
{
	for (int i=a;i>=1;i--)
	{
		for (int j=1;j<=i;j++)
		{
			//printf("*");
			printf("%d",j);
		}
		printf("\n");
	}
}

void fullPyramid(int a)
{
	int space,i,k;
	for (i=1; i<=a; i++,k=0) 
	{
        for (space=1; space<=a-i; space++)
        { 
			printf("  "); 
		}
        while (k!=2*i-1) 
		{
            printf("* ");
            k++;
        }
        printf("\n");
    } 
}
