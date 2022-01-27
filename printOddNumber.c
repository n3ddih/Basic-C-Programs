#include <stdio.h>

int main()
{
	int n,i,sum;
	printf("INPUT:\n");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		if (i%2!=0) //odd number
		{
			sum+=i;
			printf("%d ",i);
		}
	}
	print("\n%d",sum); //tong cua cac so le
}
