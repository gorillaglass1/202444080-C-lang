#include <stdio.h>

int main(void) {
    int N, X = 0;
    scanf("%d %d", &N, &X);
    
    int arr[N];
    for(int i = 0; i < N; i++) {
        // printf("%d번째 숫자 입력: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N; i++) {
        if(arr[i] < X) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}