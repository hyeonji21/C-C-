#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double price, count;
	double result = 0;

	printf("���ǰ� : ");
	scanf("%lf", &price);

	printf("�� �� : ");
	scanf("%lf", &count);
	

	if ((price * count) < 5000) {
		result = price * count;
	}
	else {
		result = (price * count) - (price * count * 0.1);
	}

	printf("�� �� : %.f", result);


	return 0;
}