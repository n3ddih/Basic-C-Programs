#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a[100],n,sum=0,i;
	float trungBinh;
	printf("INPUT:\n");
	printf("n = ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		sum += a[i];
		trungBinh = sum/n;  //tinh trung binh day so
	}
	printf("\nOUPUT:\n");
	printf("sum = %d\n",sum);
	printf("Trung Binh = %.1f\n",trungBinh);
}
