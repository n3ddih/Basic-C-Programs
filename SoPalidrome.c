#include<stdio.h>   

main()  
{  
	int n,r,sum=0,bientam;  
	 
	printf("Nhap mot so bat ky: ");  
	scanf("%d",&n);  
	bientam=n;  
	
	while(n>0)  
	{  
		r=n%10;  
		sum=(sum*10)+r;  
		n=n/10;  
	}  
	printf("OUPUT:\n");
	printf("%d",sum);
	if(bientam==sum) 
		printf("\nLa so Palindrome!");  
	else  
		printf("\nKhong phai la so Palindrome!");  
}
