#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100];

	printf("입력 문자열 : ");
	
	int i = 0;
	
	gets_s(str, sizeof(str));

	int length = strlen(str);
	
	char* p = str;

	printf("출력 문자열 : ");

	int cnt = 0;


	for (i = 0; i <= length ; i++) {
		if (p[i] == '%') {
			break;
		}
	}

	for (i = i + 1; i <= length; i++) {
		if (p[i] == '%') {
			break;
		}
		printf("%c", p[i]);
	}
	


	return 0;

}