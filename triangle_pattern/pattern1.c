/** Write the program in following pattern
	1
	4 6
	9 11 13
	17 19 21 23
*/

#include <stdio.h>

int main(){

	int row = 10;
	int num = 1;
	
	for (int i=1 ; i<=row ; i++ ){ // print row
		for (int j=1; j<=i ; j++){ // print column
			printf("%d ", num);
			if(i == 1){
				num += 1;
				continue;
			}
			if(j != i){
				num += 2;
			}
		}
		num += (i + 1);
		printf("\n");
	}

	return 0;
}