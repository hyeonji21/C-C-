#include <stdio.h>
#include <string.h>

int Count_str(char* pstr)
{
    int count = 0;

    for (; *pstr; pstr++) {
        if (*pstr != ' ') {
            count += 1;
        }
    }

    return count;

}

int main(void)
{
    char str[100];
    int count = 0;

    char* pstr;

    printf("�Է� ���ڿ� : ");
    gets_s(str, sizeof(str));

    pstr = str;
    
    printf("���鹮�ڸ� ������ ���ڼ�: %d\n", Count_str(pstr));


    return 0;

}