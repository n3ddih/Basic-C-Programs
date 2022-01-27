//Tinh 1+2+3+....+n

#include <stdio.h>
int main (){
	int i,n,sum;
	sum=0; 
	printf("Dien n:"); scanf("%d",&n);
	for (i=0;i<=n;i++){
		sum=sum+i; 
	}
	printf("Tong= %d",sum);
}
