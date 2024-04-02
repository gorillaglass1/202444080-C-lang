#include <stdio.h>

int main(void) {
    int num1 = 0;
    printf("원하는 단을 입력하세요\n");
    scanf("%d", &num1);
    
    for(int i = 1;i <= 9;i++) {
            int num2 = num1 * i;
            printf("%d * %d = %d\n", num1, i, num2);
        }
    return 0;
}