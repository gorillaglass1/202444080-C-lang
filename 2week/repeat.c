#include <stdio.h>

int main(void) {
    printf("\n\n------");
    printf("5개씩 5줄\n");
    for(int i = 0; i <= 5; i++) {
        for(int j = 0; j <= 5; j++) {
            printf("*");
        }
    printf("\n");
    }
    
    printf("\n\n------");
    printf("n번째 줄 n개\n");
    for(int i = 0; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
    printf("\n"); 
    }
    
    printf("\n\n------");
    printf("n번째 줄 n개 반대로\n");
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
    printf("\n"); 
    }
    
    printf("\n\n구분\n");
    for(int i = 5; ;i--) { //절차지향 언어기 때문에 명령어 순서가 중요함.
        if(i==0) {
            break; //가장 가까운 반복문 탈출
        }
        printf("*");
    }
    
    printf("\n\n구분\n");
    int i = 1;
    while (i<=5)
    {
        i++; //!주의 무한반복
        printf("%d", i);
    }
    
    printf("\n\n구분\n");
    while (1) //무한반복(의도) 0이외의 값은 모두 true
    {
        i++; 
        printf("%d", i);
    }
    
    return 0;
}