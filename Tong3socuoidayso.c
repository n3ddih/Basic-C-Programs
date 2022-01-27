#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	
	int i,n,j=0,sum=0;
	printf("Enter a non-negative number: ");
	scanf("%d",&n);
	if(n<0) 
	{
		printf("You enter a nagative number!\n");
	}
	
	for(i=n;i>=0;i--)
	{
		if(i%2==0)
		{
			sum+=i;
			j++;
			if(j==3) break;
		}
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%d",sum);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
