#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100

void Input(int a[MAX],int *n);
void Tang(int a[MAX],int n);
void Giam(int a[MAX],int n);
void display(int a[MAX], int n);

int main()
{
	int input[MAX],m;
	char chon;
	while (1)
	{
		system("cls");
		printf("1. Nhap vao day so\n");
		printf("2. Sap xep tu be den lon\n");
		printf("3. Sap xep tu lon den be\n");
		printf("0. Thoat\n\n\n");
		chon = getch();
		if (chon == '0') break;
		switch (chon)
		{
			case '1': 
				Input(input,&m);
				printf("\nHoan thanh\nENTER de quay lai\n");
				getch();
				break;
			
			case '2':
				Tang(input,m);
				display(input,m);
				printf("\nHoan thanh\nEnter de quay lai\n");
				getch();
				break;
				
			case '3':
				Giam(input,m);
				display(input,m);
				printf("\nHoan thanh\nEnter de quay lai\n");
				getch();
				break;
			
			default: 
				printf("\nVui long nhap lai\nEnter de quay lai\n");
				getch();
				break;
		}
	}
}

void Input(int a[MAX],int *n)
{
	printf("Nhap so phan tu trong day: ");
	scanf("%d",n);
	printf("%d\n",*n);
	for (int i=0;i<*n;i++)
	{
		printf("So thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}

void Tang(int a[MAX],int n)
{
	printf("Sap xep tu be den lon\n");
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (a[j]<a[i])
			{
				int tg;
				tg = a[i];
				a[i]=a[j];
				a[j]= tg;
			}		
}

void Giam(int a[MAX],int n)
{
	printf("Sap xep tu lon den be\n");
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (a[j]>a[i])
			{
				int tg;
				tg = a[i];
				a[i]=a[j];
				a[j]= tg;
			}
}

void display(int a[MAX], int n)
{
	printf("Day so sau khi sap xep la: \n");
	for(int i=0;i<n;i++)
		printf("%7d", a[i]);
}
