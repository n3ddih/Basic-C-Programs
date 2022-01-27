/*Chuong trinh in ra bang cuu chuong*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, n;
	while(1) {
		printf("CTRL+C : Exit\n\n");
		printf("Bang cuu chuong? "); 
		scanf("%d",&n);

		for (int i=1; i<=10 ;i++) {
			A = i * n;
			printf("%d * %d = %d\n", n, i, A);
		}	
		system("pause && cls");
	}
}
