#include <stdio.h>

int main(void)
{

	struct day {
		int yy;
		int mm;
		int dd;
	}birthday;

	printf("����(4�ڸ�) ��(2�ڸ�) ��(2�ڸ�)�� �Է��Ͻÿ� :");
	scanf_s("%d%d%d", &birthday.yy, &birthday.mm, &birthday.dd);
	printf("������� : %4d�� %2d�� %2d�ϻ� \n", birthday.yy, birthday.mm, birthday.dd);

	return 0;

}