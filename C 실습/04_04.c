#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;
	printf("�����ڸ� �Է��ϼ��� : ");
	scanf("%c", &letter);


	if (letter >= 'a' && letter <= 'z') {
		letter = letter - 32;
		printf("��� : %c", letter);
	}
	else {
		printf("��� : %c", letter);
	}


	return 0;

}