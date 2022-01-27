#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

float P,A;
int rectangle(float a, float b)
{
	printf("\nChoose side a length: "); 
		scanf("%f",&a);
	printf("Choose side b length: ");
		scanf("%f",&b);
	
	P=(a+b)*2;
	A=a*b;
	
	printf("\n================\n");
	printf("Perimeter: %.1f\n",P );
	printf("Area: %.1f\n",A );
	return 0;
}

int square(float a){
	printf("\nChoose side a length: "); 
		scanf("%f",&a);
	
	P=a*4;
	A=a*a;
	
	printf("\n================\n");
	printf("Perimeter: %.1f\n",P );
	printf("Area: %.1f\n",A );
	return 0;
}

//Triangle knowing height and base
int tri_h_b(float h, float c)
{
	printf("Height: ");
		scanf("%f",&h);
	printf("Base length: ");
		scanf("%f",&c);

	A=1/2*h*c;

	printf("\n================\n");
	printf("Area: %.1f\n",A );
	printf("Sorry but you have to calculate the Perimeter yourself!\n");
	return 0;
}

//Triangle knowing 3 sides
int tri_3_sides(float a, float b, float c, float p)
{
		printf("Sidse a: ");
			scanf("%f",&a);
		printf("Side b: ");
			scanf("%f",&b);
		printf("Side c: ");
			scanf("%f",&c);
		
		P=a+b+c;
		p=P/2;
		A=sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("\n================\n");
		printf("Perimeter: %.1f\n",P );
		printf("Area: %.1f\n",A );
		return 0;
}

void triangle()
{
	while (1){
		char chon;
		float a,b,c,p,h;
		system ("cls");
		printf("1. Knowing 3 sides\n");
		printf("2. Knowing the height and the base\n");
		printf("0. Go back\n");
		chon=getch();
		system("cls");
		if (chon == '0') break;
		switch (chon){
			
			case '1': 
				tri_3_sides(a,b,c,p);
				printf("\nDone! Enter to go back\n");
				getch();
				break;
			
			case '2': 
				tri_h_b(h,c);
				printf("\nDone! Enter to go back\n");
				getch();
				break;
				
			default:
				printf("Wrong syntax! Try again\n");
				getch();
				break;
		}
	}
}

int main(){
	while (1){
		char chon;
		float a,b;
		system("cls");
		printf("1. Rectangle\n");
		printf("2. Square\n");
		printf("3. Triangle\n");
		printf("0. Exit\n");
		
		chon=getch();
		system("cls");
		if (chon == '0') break;
			switch (chon){
				
				case '1':
					rectangle(a,b);
					printf("Done! Enter to go back\n");
					getch();
					break;
				
				case '2':
					square(a);
					printf("Done! Enter to go back\n");
					getch();
					break;
				
				case '3':
					triangle();
					printf("Done! Enter to go back\n");
					getch();
					break;
				
				default:
					printf("Wrong syntax! Try again\n");
					getch();
					break;
			}
	}
}


	
