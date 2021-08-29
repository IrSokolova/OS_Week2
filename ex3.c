#include <stdio.h>

void printFigure(int n){
	int k =1;
	int i = n;
	
	while (k<2*n){
		for (int j = 0; j < i; j++){
			printf (" ");
		}
		
		for (int j = 0; j < k; j++){
			printf ("*");
		}
		
		for (int j = 0; j < i; j++){
			printf (" ");
		}
		
		printf("\n");
		k+=2;
		i--;
	}
}

int main(int argc, char **argv){
	int n;
	sscanf(argv[1], "%d", &n);
	printFigure(n);
	return 0;
}



