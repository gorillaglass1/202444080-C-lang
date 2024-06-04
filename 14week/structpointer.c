#include <stdio.h>
typedef struct date {
    int year;
    int month;
    int day;
} date;

typedef struct student {
    int sno;
    char name[10];
    int age;
    date *sd;
} student;

int main() {
    date d = {2023, 03, 03};
    student s = {20231234, "홍길동", 23};

    s.sd = &d;

    printf("1.학번 : %d\n", s.sno);
    printf("2.성명 : %s\n", s.name);
    printf("3.나이 : %d\n", s.age);
    printf("4.입학일자 : %d. %d. %d\n", s.sd->year, s.sd->month, s.sd->day);
    return 0;
}