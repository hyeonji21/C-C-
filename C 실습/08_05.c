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

    printf("입력 문자열 : ");
    gets_s(str, sizeof(str));

    pstr = str;
    
    printf("공백문자를 제외한 문자수: %d\n", Count_str(pstr));


    return 0;

}