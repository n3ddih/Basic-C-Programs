#include <stdio.h>
#include <stdlib.h>

void input(int *a,int *b);
int UCLN(int a,int b);

int main() {
	int x, y;
	while(1) {
		int chon;
		system("cls");
		printf("Bang UCLN\n");
		printf("=========\n");
		printf("1. Chon 2 so nguyen\n");
		printf("2. In ra UCLN\n");
		printf("0. Thoat\n");
		scanf("%d",&chon);

		if(chon == 0) 
			break;
		switch (chon) {
			case 1:
				input(&x, &y);
				system("pause");
				break;

			case 2:
				printf("UCLN(%d,%d) = %d\n", x, y, UCLN(x,y));
				system("pause");
				break;

			default:
				printf("Vui long nhap ki tu hop le");
				system("pause");
				break;
		}
	}
}

void input(int *a, int *b) {
	printf("1st number: ");
		scanf("%d", a);
	printf("2nd number: ");
		scanf("%d", b);
}

int UCLN(int a, int b) {
	int c;
	if(a == 0 || b == 0)
		c = 0;
	else {
		while(a!=b) {
			if(a > b) 
				a = a - b;
			if(b > a) 
				b = b - a;
		}
		c = a;
	}
	return c;
}
