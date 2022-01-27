#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char o[100];
	printf("INPUT:\n");
	gets(o);
	printf("OUPUT:\n");
	printf("%s",strrev(o));
}
