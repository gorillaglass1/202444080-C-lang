#include <stdio.h>

int main() {
    char sa[] = "Spacezone";
    char *ps = "Spacezone";
    int cnt = 0;

    printf("배열 주소: %d\n", sa);
    printf("문자형 포인터 주소: %d\n", ps);

    for(cnt = 0; cnt < 9; cnt++) {
        printf("sa[%d] : %c\t\t", cnt, sa[cnt]);
        printf("*(ps + %d) : %c\n", cnt, *(ps + cnt));
    }

    return 0;
}