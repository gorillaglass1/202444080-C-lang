#include <stdio.h>
void creed(char **ppc);
void target(char **ppc);

int main() {
    char *pc;

    creed(&pc);
    printf("생활 신조: %s\n");

    target(&pc);
    printf("인생 좌우명 : %s\n");
    return 0;
}

void creed(char **ppc) {
    *ppc = "오늘 하루도 최선을 다하자.";
}
void target(char **ppc) {
    *ppc = "후회하지 않는 삶을 살자.";
}