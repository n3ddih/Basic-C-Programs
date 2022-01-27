#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n,i,j,dem;
	printf("INPUT:\n");
	scanf("%d",&n);
	//algorithm
	for(i=2;i<=n;i++)
	{
		dem=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				++dem;
		}
		if(dem<=2)
			printf("%d ",i);
	}
	
}
