#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	
	scanf("%d", &score);

	if (score == 1 || score == 2) {
		printf("���� ���߾��");
	}
	else if (score == 3 || score == 4) {
		printf("���߾��");
	}
	else if (score == 5 || score == 6) {
		printf("����ؾ� �ھ��");
	}
	else
		printf("���� ���� ����ؾ� �ھ��");



	return 0;


}