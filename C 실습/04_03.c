#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time, result;

	scanf("%d", &time);

	if (time <= 12) {
		printf("���� %d��", time);
	}
	else {
		if (time == 13) {
			printf("���� 1��");
		}
		else if (time == 14) {
			printf("���� 2��");
		}
		else if (time == 15) {
			printf("���� 3��");
		}
		else if (time == 16) {
			printf("���� 4��");
		}
		else if (time == 17) {
			printf("���� 5��");
		}
		else if (time == 18) {
			printf("���� 6��");
		}
		else if (time == 19) {
			printf("���� 7��");
		}
		else if (time == 20) {
			printf("���� 8��");
		}
		else if (time == 21) {
			printf("���� 9��");
		}
		else if (time == 22) {
			printf("���� 10��");
		}
		else if (time == 23) {
			printf("���� 11��");
		}
		else{
			printf("���� 12��");
		}
	}


	return 0;
}