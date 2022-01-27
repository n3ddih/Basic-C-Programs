/*Chuong trinh tinh so ngay cua 1 thang trong nam
1,3,5,7,8,10,12: 31 ngay
2: 28/29 ngay
4,6,9,11: 30 ngay
*/

#include <stdlib.h>
#include <stdio.h>

void tinhSoNgay(int thang, int *soNgay);
int namNhuan(int n);

int main() {
	int soNgay, nam, thang;
	
	while(1) {
		system("cls"); 
		//Input
		printf("Month? (0 to exit) ");
		scanf("%d",&thang);
		//exit 
		if(thang == 0) break;
		printf("Year? ");
		scanf("%d",&nam);
		
		//Incase of wrong input
		while(thang < 1 || thang > 12 || nam < 0 ) {
			system("cls");
			printf("Error! Type again!\n");
			printf("Month? "); 
			scanf("%d",&thang);
			printf("Year? ");
			scanf("%d",&nam);
		}

		tinhSoNgay(thang,&soNgay);

		printf("cls")
		if(soNgay == 28) {
			int i = namNhuan(nam);
			if(i == 1)
				printf("There are 29 days\n");
			else 
				printf("There are 28 days\n");
		}

		else if(soNgay == 0)
			printf("There's no month like that!\n");

		else 
			printf("There are %d days\n",soNgay);
		system("pause");
	}
}

void tinhSoNgay(int thang, int *soNgay) {
	switch(thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			*soNgay = 31;
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			*soNgay = 30;
			break;

		case 2:
			*soNgay = 28;
			break;

		default:
			*soNgay = 0;
			break;
	}
}

int namNhuan(int n) {
	if( n % 400 == 0 || n % 4 == 0 && n % 100 != 0 )
		return 1;	
	else 
		return 0;
}