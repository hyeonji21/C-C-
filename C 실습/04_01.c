#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if (a > 0) 
		printf("%d�� ���� ���Դϴ�.", a);
	else
		printf("%d�� ���� ���Դϴ�.\n", a);

	return 0;
}
