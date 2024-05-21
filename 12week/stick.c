#include <stdio.h>

int main() {
    int cnt = 0;
    printf("막대기 개수 입력: ");
    scanf("%d", &cnt);

    int arr[cnt];
    for(int i = 0; i < cnt; i++) {
        printf("%d번째 막대기 길이 입력해라: ", i+1);
        scanf("%d", &arr[i]);
    }

    int count = 1; //맨 오른쪽 막대기는 무조건 보이기 때문
    int max = arr[(cnt-1)];

    for(int j = (cnt-1); j >= 0; j--) { //배열의 인덱스는 0부터 시작하기 때문에 0까지도 검사 해야함/
        if(max < arr[j]) {
            max = arr[j];
            count++;
        }
    }

    // for(int j = (cnt-1); j > 0; j--)
    //     printf("%d", arr[j]);
        
    

    printf("보이는 막대: %d개\n", count);
    return 0;
}