#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* f;

int Replace_String(char* a, int length, char* b) {


	char* ptr = strstr(a, "book");

	if (ptr != NULL)
	{
		strncpy(ptr, "paper", length - 6);
	}
	for (int i = length; i >= 0; i--) {

		f = &a[i];

	}
	return (f);
}


int main(void)
{
	char str[100];
	char* a;
	printf("�Է� ���ڿ� : ");
	gets_s(str, sizeof(str));
	a = str;

	int length = strlen(a);

	char str1[100];
	char* b;
	printf("������ ���� : ");
	gets_s(str1, sizeof(str1));
	b = str1;

	printf("������ ���ڿ�: %s\n", a);

	printf("������ ���ڿ�: %s\n", Replace_String(a, length, b));


	return 0;

}