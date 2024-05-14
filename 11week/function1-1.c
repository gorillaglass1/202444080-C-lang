#include<stdio.h>

int print(int cnt);

int main()
{
  int cnt;
  scanf("%d",&cnt);
  print(cnt);
  return 0;
}

int print(int cnt) {
    for(int i=0; i < cnt; i++) {
          printf("~!@#$^&*()_+|\n");
    }
}