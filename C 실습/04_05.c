#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}

	printf("��� : %d", a + b);


	return 0;
}