#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float korean, english, math;
	float avg;

	printf("����: ");
	scanf("%f", &korean);

	printf("����: ");
	scanf("%f", &english);

	printf("����: ");
	scanf("%f", &math);

	printf("\n");

	avg = (korean + math + english) / 3;

	printf("��� %.1f", avg);


	return 0;
}