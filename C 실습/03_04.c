#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	printf("�Է� : ");
	scanf("%d", &a);

	printf("�����ڸ� : %d \n", a / 100);
	printf("�����ڸ� : %d \n", a % 100 / 10);
	printf("�����ڸ� : %d \n", a % 100 % 10);



	return 0;
}