#include <stdio.h>

struct company {
	char name[20];
	int member_cnt;
	int price;
};

int main(void)
{

	struct company first = { "���ֻ��", 25, 120300000 };
	struct company second = { "�������", 12, 100250000 };

	printf("ȸ���  \t������  \t  �����  \t  �������� \n");

	printf("%s\t", first.name);
	printf("%d\t", first.member_cnt);
	printf("\t%d\t", first.price);
	printf("  %.f\t", first.price * 0.25);

	printf("\n");

	printf("%s\t", second.name);
	printf("%d\t", second.member_cnt);
	printf("\t%d\t", second.price);
	printf("  %.f\t", second.price * 0.25);

	return 0;

}
