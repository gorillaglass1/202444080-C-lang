#include <stdio.h>

int main(void) {
    int num = 1;
    int total = 0;
    while (num <= 10)
    {
        total += num;
        num ++ ;
    }
    printf("1부터 10까지의 합 : %d\n", total);
    return 0;
}