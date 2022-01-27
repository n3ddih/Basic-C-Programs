#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void input(
	float *a1,float *a2,float *a3,
	float *pT1,float *pT2,float *pT3,
	float *FE);

void calc(
	float a1,float a2,float a3,
	float pT1,float pT2,float pT3,
	float FE);

int main()
{
	float 
		AssignGrade1,AssignGrade2,AssignGrade3,
		Progress1,Progress2,Progress3,
		finalGrade;
	printf("\nMAE pass|fail checker\n");
	system("timeout 2 && cls");
	
	input
		(&AssignGrade1,&AssignGrade2,&AssignGrade3,
		&Progress1,&Progress2,&Progress3,
		&finalGrade);
	system("cls");
	calc(
		AssignGrade1,AssignGrade2,AssignGrade3,
		Progress1,Progress2,Progress3,
		finalGrade);
}

//nhap diem
void input(
	float *a1,float *a2,float *a3,
	float *pT1,float *pT2,float *pT3,
	float *FE)
{
	printf("Please input the value\n\n");
	//assignment grade
	printf("ASSIGNMENT\n");
	printf("Assignment 1 (10%%): ");
	scanf("%f",a1);
	printf("Assignment 2 (10%%): ");
	scanf("%f",a2);
	printf("Assignment 3 (10%%): ");
	scanf("%f",a3);
	//progress test grade
	printf("\nPROGRESS TEST\n");
	printf("Progress test 1 (10%%): ");
	scanf("%f",pT1);
	printf("Progress test 2 (10%%): ");
	scanf("%f",pT2);
	printf("Progress test 3 (10%%): ");
	scanf("%f",pT3);
	//Final Exam
	printf("\nFinal Exam (40%%):\n");
	scanf("%f",FE);
	
}

//Tinh diem
void calc(
	float a1,float a2,float a3,
	float pT1,float pT2,float pT3,
	float FE)
{
	float assignTotal,progressTotal,finalResult;
	assignTotal = a1*0.1 + a2*0.1 + a3*0.1;
	progressTotal = pT1*0.1 + pT2*0.1 + pT3*0.1;
	printf("Final Exam grade: %.1f\n",FE);
	finalResult = assignTotal + progressTotal + FE*0.4;
	printf("Final Result: %.1f\n",finalResult);
	
	if(finalResult>=5 && FE>=4)
	{
		printf("\nYou PASSED!\n");
	}
	else printf("\nYou FAILED!\n");
}


