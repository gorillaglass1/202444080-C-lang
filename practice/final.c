#include <stdio.h>

int main(void){
   int sum = 0;
   int i = 0;
   for (i = 0; i <=10; i++) {
    sum += i;
    i++;
   }
    printf("%d\n", sum);
    return 0;
}
