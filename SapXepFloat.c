#include <stdio.h>

int main()
{
	float a[255],tmp;
	int i,n,j;
	printf("n? ");
	scanf("%d",&n);
	printf("INPUT:\n");
	for (i=0;i<n;i++)
		scanf("%f",&a[i]);
	
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]<a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("OUPUT:\n");
	for (i=0;i<n;i++)
		printf("%f  ",a[i]);
}
