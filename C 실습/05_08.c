#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int max = 0;
	int min = 0;
	int cnt = 0;

	while (1){


		printf("���� �Է� : ");
		scanf("%d", &n);

		cnt += 1;

		if (cnt == 1) {
			max = n;
			min = n;
		}


		if (n == 0) {
			break;
		}
		else {
			
			if (max < n) {
				max = n;
			}
			if (min > n) {
				min = n;
			}
		}
	}

	printf("�ִ밪 : %d    ", max);
	printf("�ּҰ� : %d", min);


	return 0;

}