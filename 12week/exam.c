#include <stdio.h>
void fortune_cookie(char msg[]) {
    printf("Message reads: %s", msg);
    printf("msg occupies %li bytes\n", sizeof(msg)); //%d는 10진수 %i는 10 16 8진수 표현가능
}

int main() {
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
}