#include <stdio.h>
#include <stdlib.h>
struct std {
    int sno;
    char name[10];
    float avg;
};

int main() {
    struct std s;

    s.sno = 20201233;
    strcpy(s.name, "홍길동");
    s.avg = 88.33;

    printf("학번 : %d\n", s.sno);
    printf("성명: %s\n", s.name);
    printf("점수 : %.2f\n", s.avg);
    return 0;
}