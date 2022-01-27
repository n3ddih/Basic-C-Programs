#include <stdio.h>

int main()
{
	int n,r,c=0;
	printf("n= ");
	scanf("%d",&n);

	while(n>0)
	{
		n=n/10;
		c++;
	}
	printf("OUPUT:\n");
	printf("%d",c);
}
