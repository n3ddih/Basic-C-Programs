//program that convert an integer into an array 
//limit: 9 digit

#include <stdlib.h>
#include <stdio.h>
#define MAX 100

int times(int a, int b);
int elementNum(int n);
void convert(int n, int a[MAX]);

int main() {
    int n, array[MAX];
    printf("INPUT:\n");
    fflush(stdin);
    scanf("%d",&n);
    convert(n, array);
    for(int i = 0; i < elementNum(n) ;i++) 
        printf("%d ",array[i]);
}

void convert(int n, int a[MAX]) {
    int i,j=0;
    for(i=times(10,elementNum(n)-1) ; i>=1 ; i/=10) {
        a[j] = n/i;
        n = n - (a[j]*i);
        j++;
    }
}

int times(int a, int b) {
    int P=1;
    for(int i=0;i<b;i++) {
        P *= a;
    }
    return P;
}

int elementNum(int n) {
    int c=0;
    while(n>0) {
        n /= 10;
        c++;
    }
    return c;
}