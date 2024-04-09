#include <stdio.h>

int main(void) {
    int x, y;
    char op;
    printf ("input numbers\ninput:");
    scanf("%d %c %d", &x, &op, &y);
    if (op == '+')
    {
        printf("%d %c %d = %d", x, op, y, x+y);
    } else if (op == '-')
    {
        printf("%d %c %d = %d", x, op, y, x-y);
    } else if (op == '*')
    {
        printf("%d %c %d = %d", x, op, y, x*y);
    } else if (op == '/')
    {
        printf("%d %c %d = %d", x, op, y, x/y);
    } else {
        printf("잘못된 입력");
    }

    return 0;
}