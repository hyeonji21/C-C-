#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b, c;
	char result;

	printf("�����ڸ� �Է��ϼ��� : ");
	scanf("%c %c %c", &a, &b, &c);

	if (a < b) {
		if (a < c) {
			printf("��� : %c", a);
		}
		else {
			printf("��� : %c", c);
		}
	}
	else {
		if (b < c) {
			printf("��� : %c", b);
		}
		else {
			printf("��� : %c", c);
		}
	}




	return 0;
}