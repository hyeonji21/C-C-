#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no, count;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &no);

	printf("shift �ϰ��� �ϴ� �� : ");
	scanf("%d", &count);

	printf("��� : %d", no << count);


	return 0;
}