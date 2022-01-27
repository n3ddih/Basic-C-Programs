#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, n;

	printf("\nNhap n: ");
	scanf("%d", &n);

	// tam giac can
	printf("Cau a: \n");
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n + i - 1; ++j)
		{
			printf((j < n - i + 1) ? " " : "%c", 236);
		}
		printf("\n");
	}


	printf("\nCau b:\n");
	// tam giac can rong
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n + i - 1; ++j)
		{
			printf((j == n - i + 1 || j == n + i - 1 || i == n) ? "%c" : " ", 234);
		}
		putchar('\n');
	}
	printf("\n");
	
	
	printf("\nCau c:\n");
	// tam giac vuong
	for(i = n; i>0; i--)
	{
		for(j = n; j > 0; j--)
		{
			printf((j <= i) ? "%c" : " ", 234);
		}
		printf("\n\n");
	}


	printf("\nCau d:\n");
	// tam giac vuong rong
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n; ++j)
		{
			printf((j == i || j == 1 || i == n) ? "*" : " ");
		}
		printf("\n");
	}

	 
	return 0;
}
//ve hinh chu nhat
/*#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, m, n;

	printf("\nNhap m: ");
	scanf("%d", &m);

	// Câu a
	printf("\nNhap n: ");
	scanf("%d", &n);

	for(i = 1; i <= m; ++i)
	{
		for(j = 1; j <= n; ++j) 
		{
			printf("*");
		}
		printf("\n"); //xuong dong khi in xong 1 hang 
	}

	printf( "\n" );

	for(i = 1; i <= m; ++i)
	{
		for(j = 1; j <= n; ++j) 
		{
			if( i == 1 || i == m || j == 1 || j == n )
			{
				printf("*");
				if(j == n)
				printf( "\n" );
			}
			else
				printf(" "); 
		}
	}
	getch();
	return 0;
}*/
