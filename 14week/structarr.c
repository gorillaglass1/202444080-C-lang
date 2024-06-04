#include <stdio.h>
typedef struct person {
    char name[10];
    char gender;
    int age;
} personinfo;

int main() {
    personinfo arr[3] = {
        {"홍길동", 'M', 23},
        {"김가을", 'W', 20},
        {"이겨레", 'M', 25}
    };

    int cnt;

    for(cnt = 0; cnt < 3; cnt++) {
        printf("%4d\t", cnt + 1);
        printf("%8s %6c %6d\n", arr[cnt].name, arr[cnt].gender, arr[cnt].age);
    }
    return 0;
}