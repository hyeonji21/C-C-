#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int rank;
	scanf("%d", &rank);


	switch (rank){
	case 1:
		printf("����, ���, ��ǻ��, ������");
		break;

	case 2:
		printf("����, ���, ��ǻ��");
		break;

	case 3:
		printf("����, ���");
		break;

	case 4:
		printf("����");
		break;

	}


	return 0;
}