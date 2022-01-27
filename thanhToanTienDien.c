#include <stdio.h>
#include <stdlib.h>
#define max 100

int so_kw[max], don_gia[max], thanh_tien[max];

void inputData(int *n);
void display(int n);
void thanhTien(int n);
int trungBinh(int n);
void rowDisplay();

int main() {
	int houseNum, sum;

	printf("Electicity Bill Table\n\n");	
	inputData(&houseNum);
	thanhTien(houseNum);
	display(houseNum);

	return 0;
}

void inputData(int *n) {
	printf("Number of house: ");
	scanf("%d", n);
	printf("\nINPUT:\n");
		for (int i=0;i<*n;i++) {
			printf("Number of KW of house #%d: ",i+1);
			scanf("%d",&so_kw[i]);

			if (so_kw[i]>500) 
				don_gia[i]=3000;

			else if (so_kw[i]>400)
				don_gia[i]=2587;

			else if (so_kw[i]>300)
				don_gia[i]=2505;

			else if (so_kw[i]>200)
				don_gia[i]=2242;

			else if (so_kw[i]>100)
				don_gia[i]=1786;

			else if (so_kw[i]>50)
				don_gia[i]=1533;

			else if (so_kw[i]>0)
				don_gia[i]=1484;
		}
}

void display(int n) {
	int A;
	system("cls");
	rowDisplay();
	printf("|%3s|%8s|%8s|%10s|\n","STT","So KW","DON GIA","THANH TIEN");
	rowDisplay();
	for(int i=0;i<n;i++) {
		printf("|%3d|%8d|%8d|%10d|\n",i+1,so_kw[i],don_gia[i],thanh_tien[i]);
		rowDisplay();	
	}
	A = trungBinh(n);
	printf("|GIA TIEN TRUNG BINH: %11d|\n",A);
	rowDisplay();
}

void thanhTien(int n) {
	for (int i=0;i<n;i++)
		thanh_tien[i] = so_kw[i] * don_gia[i];
}

int trungBinh(int n) {
	int A;
	for (int i=0;i<n;i++)
		A += thanh_tien[i];

	return A;
}

void rowDisplay() {
	for(int i=0;i<34;i++) 
		printf("-");

	printf("\n");
}

