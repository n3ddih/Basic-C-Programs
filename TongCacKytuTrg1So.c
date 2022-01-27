#include <stdio.h>

int main()
{
	int n,sum,r,multi=1; 
	printf("INPUT:\n");
	fflush(stdin);
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		//sum=sum+r; 
		multi*=r; 
		n=n/10;
	}
	
	printf("OUPUT:\n");
	//printf("sum=%d",sum);
	printf("multi=%d",multi);
}
