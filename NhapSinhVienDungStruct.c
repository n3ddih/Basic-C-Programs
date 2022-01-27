#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
	char roll[10];
	char name[20];
	int birth;
	float grade;	
}stuInfo;

//Function call
void printRow();
void inputData(int n, stuInfo st[MAX]);
void displayTable(int n, stuInfo st[MAX]);
void findStudent(int n, stuInfo st[MAX]);

int main() {
	int n;
	stuInfo student[MAX];

	printf("Number of students? ");
	scanf("%d", &n);
	
	inputData(n, student);
	
	displayTable(n, student);
	
	findStudent(n, student);
}

void inputData(int n, stuInfo st[MAX]) {
	for(int i=0; i<n ;i++) {
		printf("STUDENT %d INFO:\n",i+1);
	
		printf("Roll? ");
			fflush(stdin);
		gets(st[i].roll);
	
		printf("Name? ");
			fflush(stdin);
		gets(st[i].name);
	
		printf("Year of Birth? ");
			fflush(stdin);
		scanf("%d",&st[i].birth);
	
		printf("Grade? ");	
			fflush(stdin);
		scanf("%f",&st[i].grade);
		system("cls");
	}
}


void displayTable(int n, stuInfo st[MAX]) {
	printRow();
	printf("|%3s|%10s|%20s|%4s|%5s|\n","STT","Roll","Name","YoB","Grade");
	printRow();
	for(int i=0; i<n ;i++) {
		printf("|%3d|%10s|%20s|%4d|%5.1f|\n", i+1, st[i].roll, st[i].name, st[i].birth, st[i].grade);
		printRow();
	}	
}

void findStudent(int n, stuInfo st[MAX]) {
	char findRoll[10];
	int tmp, j = 0;
	printf("\nInput the roll: ");
		fflush(stdin);
	gets(findRoll);

	for(int i=0; i<=n ;i++) {
		tmp = strcmp(findRoll,st[i].roll);
		j=i;
	}
	
	if(tmp=0) {
			printf("Name: %s\n", st[j].name);
			printf("Year of Birth: %d\n", st[j].birth);
			printf("Grade: %.1f",st[j].grade);
	} else 
		printf("\nThere is no roll like that\n");
}

void printRow() {
	for(int i=0; i<23 ;i++)
		printf("-");
}


