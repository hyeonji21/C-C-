#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char str[100];
	
	printf("�Է� ���ڿ� : ");
	gets_s(str, sizeof(str));

	printf("�ܾ�:");

	char* ptr = strtok(str, " ");      

	while (ptr != NULL)              
	{
		printf("\t %s\n", ptr);         
		ptr = strtok(NULL, " ");    
	}

	return 0;

}


