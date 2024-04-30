#include <stdio.h>

int main(void){
    int n = 0; //입력 받는 수 
    int sum = 0;
    printf("입력하셈\n입력:");
    scanf("%d", &n);
    int i = 0; //for문 초기값

    while (1)
    {
        if(n < i) { //for문 조건문의 반대(만약 for문이었다면 i가 n보다 작거나 같을때까지 더한다.)
            break;
        }

        if(i % 2 == 0) {
                sum += i;
        }
        i++; //for문 증감식부분 ++를 if내부에 넣으면 짝수일 때만 i가 증가하기 때문에 무한루프에 빠짐
    }
    
    printf("결과:%d\n", sum);
    return 0;
}