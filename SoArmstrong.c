#include <stdio.h>

int main()
{
	int n,i,sum,bientam,r;
	printf("INPUT:\n");
	scanf("%d",&n);
	bientam=n;
	
	while(n>0)  
	{  
		r=n%10;  
		sum=sum+(r*r*r);  
		n=n/10;  
		printf("%d ",r);
	}  
	if(bientam==sum)  
		printf("\nLa so Armstrong ");  
	else  	
		printf("\nKhong la so Armstrong");  
}
