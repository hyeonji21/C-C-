#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void string_len(int size)
{
	int i;
	int cnt = 0;

	for (i = 0; i <= size; i++) {

		cnt += 1;

	}
	
	printf("���ڿ��� ����: %d", cnt);

}

int main(void)
{
	char arr[20];

	int i;
	int n = 0;

	printf("���ڿ�(�Է�): ");

	for (i = 0; i < 20; i++) {

		scanf("%c", &arr[i]);

		if (arr[i] == '\n') {
			break;
		}
		else {
			n += 1;
		}
	}
	string_len(n);

	return 0;
}