#include <stdio.h>
#include <stdlib.h>

//function call
int dateCheck(int d, int m, int y);

int main() {
    int day, month, year;
    while(1) {
        system("cls");
        //Input
        printf("Type 0 to exit\n\n");
        printf("Day: ");
        scanf("%d",&day);
        if(day == 0) 
            break;

        printf("Month: ");
        scanf("%d",&month);
        if(month == 0)
            break;

        printf("Year: ");
        scanf("%d",&year);
        if(year == 0)
            break;

        if(day < 0 || day > 31 || month < 0 || month >12 || year < 0) 
            printf("This is not a valid date.\n");

        else {
            int check = dateCheck(day, month, year);
            if(check == 1)
                printf("This is a valid date.\n");
            else 
                printf("This is not a valid date.\n");
        }
        system("pause");
    }
}

int dateCheck(int d, int m, int y) {
    int i = 1;
    if(m == 2 ) {
        if( y % 400 == 0 || y % 4 == 0 && y % 100 != 0 ) { //Nam nhuan
            if(d > 29)
                i = 0;
        } 
        else if (d > 28)
            i = 0;
    }
    
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d == 31)
            i = 0;
    } 
    return i;
}

