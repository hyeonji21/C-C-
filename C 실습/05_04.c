#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	int n;

	printf("10 �̻��� �ڿ����� �Է��ϼ��� : ");
	scanf("%d", &n);

	if (n >= 1 && n < 10) {
		return 1;
	}

	do
	{
		sum += i;

		i++;

	} while (i <= n);

	printf("%d������ �� : %d", n, sum);


	return 0;
}