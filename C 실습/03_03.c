#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("a�� b�� �Է����ּ���: ");
	scanf("%d %d", &a, &b);

	printf("�� : %d \n", a / b);
	printf("������ : %d \n", a % b);



	return 0;
}