/*
    Find out how many lines there are where the number of 0's 
    is a multiple of 3 or the numbers of 1s is a multiple of 2
*/

#include <stdio.h>

int main() {
    int count1 = 0, count0 = 0, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=0 ; i<=n ; i++) {
        int tmp = i;

        if(tmp == 0) 
            count0 += 1;
        else if(tmp == 1)
            count1 += 1;

        else if(tmp > 9) {
            while(tmp > 0) {
                int j = tmp % 10;
                tmp /= 10;
                if(j == 0)
                    count0 += 1;
                else if(j == 1)
                    count1 += 1;
            }
        }    
    }
    printf("Number of 0's is %d\n", count0);
    printf("Number of 1's is %d\n", count1);
}