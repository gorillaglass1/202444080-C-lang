#include <stdio.h>

int main(void) {
    int x, y;
    char op;
    printf ("input numbers\ninput:");
    scanf("%d %c %d", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("%d %c %d = %d", x, op, y, x+y);
        break;
    case '-':
        printf("%d %c %d = %d", x, op, y, x-y);
        break;
    case '*':
        printf("%d %c %d = %d", x, op, y, x*y);
        break;
    case '/':
        printf("%d %c %d = %d", x, op, y, x/y);
        break;
    default:
        printf("잘못된 입력");
        break;
    }
    return 0;
}