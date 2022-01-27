#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i=0, r, a[8];
	printf("INPUT:\n");
	scanf("%d",&n);

	for (i=0; i<8 ;i++) {
		r = n % 2;
		n = n / 2;
		a[i] = r;
	}
	for (i=7; i>=0 ;i--)
		printf("%d",a[i]);
}
