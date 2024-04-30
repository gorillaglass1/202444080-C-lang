#include <stdio.h>

int main() {
    int input = 0;
    printf("입력해라: ");
    scanf("%d", &input);
    printf("\n출력임: ");
    for(int i = 1; i <= input; i++)
        printf(" %d ", i);
    return 0;
}