#include <stdio.h>
#define AL 5

int main() {
    int sList[AL] = {5, 4, 3, 2, 1};
    int a, b, temp, sort = 0;

    printf("초기> 배열 요소 : 5 4 3 2 1\n");
    printf("\n[for 문으로 서택 정렬 수행]\n");

    for(a = 0; a < AL-1; a++) {
        sort = a;
        for(b = a+1; b < AL; b++) {
            if(sList[b] < sList[sort]) {
                sort = b;
            }
        }

        temp = sList[a];
        sList[a] = sList[sort];
        sList[sort] = temp;
    }
    printf("결과> 배열 요소: ");

    for(a = 0; a < AL; a++)
        printf("%d ", sList[a]);
    return 0;
}