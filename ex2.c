#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Enter the string\n");
	gets(str);
	if (strlen(str)>100)
		printf ("Decrease the length of a string\n");
			else for (int i = strlen(str)-1; i>=0; i--){
				printf ("%c", str[i]);
			}
	
	return 0;
}
