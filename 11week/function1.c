#include <stdio.h>
void printLine();

int main(void) {
    printLine();
    printf("line 함수를 호출하였습니다.\n");
    printf("line 함수를 다시 호출합니다.\n");
    printLine();
    return 0;
}

void printLine(void) {
    printf("===================================\n");
}