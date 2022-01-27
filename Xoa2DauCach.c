#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[100];
	printf("Nhap day: ");
	gets(str);
	for (int i=0;i<strlen(str);i++)
	{
		if (str[i]==str[i+1] && str[i]==' ')
		{
			for(int j=i; j<strlen(str); j++)
			{
				str[j]=str[j+1];
			}
		}
	}
	printf("\n%s",str);
}

