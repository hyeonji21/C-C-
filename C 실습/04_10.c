#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade;
	scanf("%d", &grade);

	switch (grade) {

	case 1:
		printf("���� ���߾��");
		break;

	case 2:
	case 3:
		printf("���߾��");
		break;

	case 4:
	case 5:
		printf("����ؾ� �ھ��");
		break;

	case 6:
	case 7:
		printf("���� ���� ����ؾ� �ھ��");
		break;
	}


	return 0;
}