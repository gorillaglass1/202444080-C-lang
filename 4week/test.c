#include <stdio.h>

int main(void){
    int x = 0; //입력 받는 수 
    int y = 0;
    int sum = 0;
    printf("input your number:");
    scanf("%d", &x);

    while (1)
    {
        if(x % 2 == 0) {
                sum += y;
        }
        y++;
        if(x < y) {
            break;
        }
        }
    
    
    printf("\n합계:%d\n", sum);
    return 0;
}