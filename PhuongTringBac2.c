#include <stdio.h>
#include <conio.h>
#include <math.h>

void inputData(float *a, float *b, float *c);
void giaiPT(float a, float b, float c);

int main()
{
	float a,b,c;
	printf("Chuong trinh giai phuong trinh bac 2\n");
	inputData(&a,&b,&c);
	giaiPT(a,b,c);
}

//nhap du lieu
void inputData(float *a, float *b, float *c){
	printf("Nhap he so a: "); scanf("%f",a);
	printf("Nhap he so b: "); scanf("%f",b);
	printf("Nhap he so c: "); scanf("%f",c);
}

//Giai phuong trinh
void giaiPT(float a, float b, float c)
{
	float D,x1,x2;
	D=b*b-4*a*c;
	
	if (D<0) //Vo nghiem
	{
		printf("Phuong trinh vo nghiem\n");
	}
	
	else if (D==0) //Nghiem kep
	{
		printf("Phuong trinh co nghiem kep\n");
		x1=x2=(-b)/a;
		printf("x1=x2=%.2f",x1);
	}
	
	else //2 nghiem
	{ 
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet\n");
		printf("x1=%.2f \nx2=%.2f \n",x1,x2);
	}
}
