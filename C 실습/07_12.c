#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[4][10] = { "����1��", "����2��", "���˰�", "�λ��"};

	int i, j;
	int a, num;

	printf("����ڵ� : ");
	scanf("%d", &a);

	num = (a / 100);

	printf("���� : ");

	printf("%s", arr[num - 1]);


	printf("        �����ȣ : %d", a % 100);

	return 0;

}