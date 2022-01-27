//in day fibonacci
#include <stdio.h>

int main() {
	int n, i, c;
	int a[50];
	a[0] = 0, a[1] = 1;

	printf("n? ");
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		a[i+2] = a[i] + a[i+1];
	}

	for (i=0; i<n; i++) {
		printf("%d ", a[i]);
		c++;
		if (c % 10 == 0)
			printf("\n");
	}
}
