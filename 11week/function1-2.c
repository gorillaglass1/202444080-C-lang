#include <stdio.h>
const float pie = 3.14;
int circle(int radius);

int main(void) {
    int radius = 0;
    float area = 0;
    printf("반지름의 길이 입력:");
    scanf("%d", &radius);
    area = circle(radius);
    printf("%.2f\n", area);
    return 0;
}

int circle(int radius) {
    return radius * radius * pie;
}