#include <stdio.h>

int main() {
	int i,j,k;
	char a;
	FILE *file;
	
	file=fopen("pass.txt","w");
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (a='a';a<='z';a++)
					fprintf(file,"%c%d%d%d\n",a,i,j,k);
			}
		}
	}
	
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (a='a';a<='z';a++)
					fprintf(file,"%d%c%d%d\n",i,a,j,k);
			}
		}
	}
	
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (a='a';a<='z';a++)
					fprintf(file,"%d%d%c%d\n",j,i,a,k);
			}
		}
	}
	
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			for (k=0;k<10;k++) {
				for (a='a';a<='z';a++)
					fprintf(file,"%d%d%d%c\n",i,j,k,a);
			}
		}
	}
	
	fclose(file);
	return 0;
}
