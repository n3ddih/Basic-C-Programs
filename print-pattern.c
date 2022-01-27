/*
    for 1 to n print pattern.
    Example:    1
                4 6
                9 11 13
                17 19 21 23
*/

#include <stdio.h>

int main() {
    int n = 1, check;
    printf("INPUT: ");
    scanf("%d", &check);

    for(int i=1 ; i<=check ; i++) {
        n += i;
        printf("%d ", n);
        
        if(i > 1) {
            for(int j=0 ; j<i-1 ; j++) {
                n += 2;
                printf("%d ", n);
            }
        }
        printf("\n");
        
    }
}