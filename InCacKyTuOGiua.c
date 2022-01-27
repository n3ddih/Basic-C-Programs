#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char a[100],b[100];
	int n,i,j;
	
	printf("INPUT:\n");
	scanf("%s",a);

	while(strlen(a)%2 == 0 || strlen(a) < 5) {
		system("cls");
		printf("REINPUT:\n");
		scanf("%s",a);
	}
	n = strlen(a)/2;
	
	/*b[0]=a[n-2];
	b[1]=a[n-1];
	b[2]=a[n];
	b[3]=a[n+1];
	b[4]=a[n+2];*/
	
	for (i=0, j=-2 ; i<5, j<=2 ; i++, j++)
		b[i] = a[n+j];
	printf("%s",b);
}
