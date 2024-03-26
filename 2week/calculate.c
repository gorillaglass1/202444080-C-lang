#include <stdio.h>

int add(int a, int b); //전처리부분에 함수를 써줘야 main함수에서 쓸 수 있음 (절차지향과 관계없이 컴파일러 특성임!)
int minus(int a, int b); //함수를 사용할 때만 메모리에 a, b 공간할당
int multi(int a, int b);
int div(int a, int b);

int main(void) {
    int a, b; //프로그램이 작동 중이면 공간을 계속 사용하고 있어야함
    int result = 0;
    //int result1 = 0;
    //int result2 = 0;
    //int result3 = 0;
    printf("숫자를 동시에 2개를 입력하세요.\n");
    scanf("%d %d", &a, &b);
    
    result = add(a, b); //a, b의 이름을 꼭 같게 할 필요는 없음 (다른 변수) - 값만 복사해서 사용함
    printf("더하기: %d + %d = %d\n", a, b, result); //값을 return에서 사용해야 유지보수 편리함
    
    result = minus(a, b);
    printf("빼기 : %d - %d = %d\n", a, b, result);

    result = multi(a, b);
    printf("곱하기: %d * %d = %d\n", a, b, result);
    
    result = div(a, b);
    printf("나누기 : %d / %d = %d\n", a, b, result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}
int multi(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}