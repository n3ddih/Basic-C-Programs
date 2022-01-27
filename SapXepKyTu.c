#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	char a[4][2],tmp[4];
  	int i,j,cmp;
  	
  	printf("INPUT: \n");
  	
  	for (i=0;i<4;i++)
	  		scanf("%s",a[i]);
	
	for (i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			cmp=strcmp(a[i],a[j]);
		
			if(cmp>0)
			{
				strcpy(tmp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],tmp);
			}
		}
	}
  	
 	printf("\nOUTPUT:\n");

	for (i=0;i<4;i++)
		printf("%3s",a[i]);


 	printf("\n");
 	system ("pause");
 	return(0);
}
