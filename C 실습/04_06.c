#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("%d�� ¦���Դϴ�.", a);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.", a);
	}


	return 0;
}