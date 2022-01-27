#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

void input(int n, int a[MAX])
{
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf(" %d",&a[i]);
	}
}

void display(int n, int a[MAX])
{
	for(int i=0; i<n; i++)
	{
		printf("%5d",a[i]);
	}
}

void separateSign(int n, int *k, int *j, int a[MAX], int negative[MAX], int positive[MAX])
{
	*j=0;
	*k=0;
	
	for (int i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			positive[*j]=a[i];
			(*j)++;
		}
		else if (a[i]<0)
		{
			negative[*k]=a[i];
			(*k)++;
		}
	}
}

int main()
{
	int n,j,k;
	int a[MAX], negative[MAX], positive[MAX];
	
	printf("Enter n = ");
	scanf("%d",&n);
	
	input(n,a);
	system("cls");
	separateSign(n,&k,&j,a,negative,positive);
	display(j,positive);
	printf("\n");
	display(k,negative);
	
	return 0;
}



