#include <stdio.h>

struct chemical {
	int num;
	int num2;
	char symbol;
	char name[20];
	double weight;
};

int main(void)
{
	struct chemical list = { 6, 6, 'C', "Carbon", 12.0115 };

	printf("���ڹ�ȣ : %d \n", list.num);
	printf("���ҹ�ȣ : %d \n", list.num2);
	printf("���ұ�ȣ : %c \n", list.symbol);
	printf("�����̸� : %s \n", list.name);
	printf("���ڷ� : %.4lf \n", list.weight);

	return 0;

}