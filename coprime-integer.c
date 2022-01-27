//check if 2 integer is a coprime-integer

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, check=1, tmp;
    printf("Number 1st: ");
    scanf("%d", &n1);
    printf("Number 2nd: ");
    scanf("%d", &n2);
    while(n1 == n2) {
        printf("\n2 numbers must be different!\n");
        printf("Number 1st: ");
        scanf("%d", &n1);
        printf("Number 2nd: ");
        scanf("%d", &n2);
    }

    //algorithm
    if(n1<n2)
        tmp = n1;
    else
        tmp = n2;

    for (int i=2; i <= tmp ; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            check = 0;
            break;
        }
    }
    
    if(check == 1)
        printf("\nIs coprime-integer\n");
    else
        printf("\nIs NOT coprime-integer\n");
}