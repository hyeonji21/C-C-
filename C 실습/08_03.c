#include <stdio.h>

int main(void)
{
	
	const char* ptr = "Program";

	int i;

	printf("%s\t", ptr);
	printf("%c \n", ptr[0]);



	for (int n = 1; n < 7; n++) {
		for (i = n; i < ptr[i] != '\0'; i++) {
			printf("%c", ptr[i]);
		}
		printf(" \t");
		printf("%c \n", ptr[n] - 32);
	}


	

	return 0;

}