//print prime numbers from 1 to n

#include <stdio.h>
#include <math.h>

int main() {
	int n,i,d;
	printf("INPUT:\n");
	scanf("%d",&n);

	//algorithm
	for(i=2;i<=n;i++) {
		d=2;
		while(i%d!=0)
			d++;
		if(d>=i)
			printf("%d ",i);
	}
	return 0;
}
