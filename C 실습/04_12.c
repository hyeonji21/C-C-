#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a;
	int num1, num2;
	int result;

	printf("�Է�(�����ȣ, ����, ����) : ");
	scanf("%c %d %d", &a, &num1, &num2);

	if (a == '+') {
		result = num1 + num2;
	}
	else if (a == '-') {
		result = num1 - num2;
	}
	else if (a == '*') {
		result = num1 * num2;
	}
	else
		result = num1 / num2;


	printf("���� ��� : %d", result);




	return 0;
}