#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;

	scanf("%c", &letter);
	
	if (letter >= 'A' && letter <= 'Z') {
		printf("�빮�� %c�Դϴ�.", letter);
	}
	else
		printf("�ҹ��� %c�Դϴ�.", letter);
	
	return 0;

}