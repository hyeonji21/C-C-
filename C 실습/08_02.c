#include <stdio.h>

int main(void)
{
	double flo_arr[10] = { 10.4, 21.5, 12.3, 97.2, 50.1, 19.1, 32.1, 43.1, 86.3, 10.3 };

	printf("배열의 첨자 \t 배열의 주소 \t 배열의 내용");

	printf("\n\n");

	double* p = &flo_arr[0];

	int i;
	for (i = 0; i < 10; i++) {
		printf("flo_arr[%d] \t %d \t %.1lf", i, (p+i), *(p + i));
		printf("\n");
	}


	return 0;

}