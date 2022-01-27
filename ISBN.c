#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, check, array[10], sum, count;
	while(1) {
        n = 0, sum = 0, count = 0, check = 0;
		printf("\nISBN (0 to quit): ");
		scanf("%d",&n);
		if(n == 0) break;
		
		for(int i=0; n>0; i++) {
            check = n % 10;
            array[i] = check;
            n /= 10;
            check = 0;
            count++;
        }
        int j=0;
        for(int i=1; i<10 ;i++) {
            sum = sum + (array[j] * i);
            j++;
        }
        if(sum%11 == 0)
            printf("\nIs a valid ISBN\n");
        else 
            printf("\nIs not a valid ISBN\n");
	}
}


