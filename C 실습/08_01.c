#include <stdio.h>

int main(void)
{

	int n[10] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 0 };
	int* p;
	p = n;

	printf("배열의 내용: %d", *p);
	p++;
	for (; *p != 0; p++) {
		printf(", %d", *p);
	}
	printf("\n");


	return 0;

}