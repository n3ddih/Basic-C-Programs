#include <stdio.h>

int main()
{
	int result=1,n;
	printf("n= ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		result=result*i;
	}
	
	printf("n!= %d",result);
}
