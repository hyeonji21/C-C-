#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 100) {
		
		sum += i;
		
		i += 2;
	}

	printf("Ȧ���� ��(1-100) : %d", sum);


	return 0;
}