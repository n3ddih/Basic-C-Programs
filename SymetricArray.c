#include <stdio.h>

int main()
{
	int i, n, j = 0, check = 1;
	int a[100], b[100];
	scanf("%d", &n);
	printf("INPUT:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = n - 1; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			check = 0;
	}
	if (check == 1)
		printf("Is symetric");
	else
		printf("Is not symetric");
}
