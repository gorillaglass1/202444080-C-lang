#include <stdio.h>

int main(void){
    int n = 0; //입력 받는 수 
    int i = 0;
    int sum = 0;
    printf("입력하셈\n입력:");
    scanf("%d", &n);

    while (1)
    {
        if(i % 2 == 0) {
                sum += i;
        }
        i++; //for문 증감식부분 ++를 if내부에 넣으면 짝수일 때만 i가 증가하고 무한루프에 빠짐짐
        if(n <= i) { //for문 조건문의 반대
            break;
        }
    }
    
    printf("결과:%d\n", sum);
    return 0;
}
