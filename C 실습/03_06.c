#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int check;

	printf("�μ��� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	check = (a > b) ? a : b;

	printf("ū�� : %d \n", check);


	return 0;
}