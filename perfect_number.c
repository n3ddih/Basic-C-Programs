//so ho�n hao l� so c� tong c�c uoc bang ch�nh n�

#include <stdio.h>
#include <conio.h>

void inputdata(int *num);
void check(int n);

main(){
	int n;
	//inputdata(&n);
	for (int i=1;;i++){
		check(i);
	}	
}

void inputdata(int *num) {
	printf("Enter an integer: "); 
	scanf("%d", num);	
}

void check(int n) {
	int S=0;
	for (int i = 1; i < n; i++)
        if (n % i == 0)
            S += i;  
	
	if (S == n)
        printf("%d\n", n);

	//getch();
}
