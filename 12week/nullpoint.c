#include <stdio.h>

int main() {
    char str[20];
    int cnt, length = 0;

    printf("문자열을 20바이트(영어: 20자)이내로 입력: ");
    scanf("%s", str);

    for(cnt = 0; str[cnt] != '\0'; cnt++) {
        length++;
        printf("%c", str[cnt]); //문자열을 인덱스를 사용하여 문자형식으로 출력 (한글은 한글자에 2byte라 이상하게 출력됨)
    }

    printf("\n");
    printf("입력한 문자열: %dbyte\n", length);
    return 0;
}