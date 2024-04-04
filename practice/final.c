#include <stdio.h>
int selectFunction(char product[]);

int main(void){
    int total = 0;
    int totalPrice = 0;
    
    char menu1[] = "1. 클럽샌드위치";
    char menu2[] = "2. 햄치즈샌드위치";
    char menu3[] = "3. 콜라";
    char menu4[] = "4. 사이다";
    char menu5[] = "5. 오렌지주스";
    int price1 = 6000;
    int price2 = 7000;
    int price3 = 2000;
    int price5 = 2500;
                
    printf("\n--메뉴--\n");
    printf("%s %d원\n", menu1, price1);
    printf("%s %d원\n", menu2, price2);
    printf("%s %d원\n", menu3, price3);
    printf("%s %d원\n", menu4, price3);
    printf("%s %d원\n", menu5, price5);
    printf("------------------------------\n");

    int nextOrder = 1;
        while (nextOrder == 1) //주문페이지
        {
            int select = 0;
            printf("\n주문하시려면 해당 상품의 번호를 입력하십시오\n 입력: ");
            scanf("%d", &select);

            if(select == 1) {
                int innerCount = selectFunction(menu1);
                total += innerCount;
                totalPrice += price1 * innerCount;
            } else if (select == 2) 
            {
                int innerCount = selectFunction(menu2);
                total += innerCount;
                totalPrice += price2 * innerCount;
            } else if (select == 3) 
            {
                int innerCount = selectFunction(menu3);
                total += innerCount;
                totalPrice += price3 * innerCount;
            } else if (select == 4) 
            {
                int innerCount = selectFunction(menu4);
                total += innerCount;
                totalPrice += price3 * innerCount;
            } else if (select == 5) 
            {
                int innerCount = selectFunction(menu5);
                total += innerCount;
                totalPrice += price5 * innerCount;
            }

            printf("\n주문을 추가하려면 1 종료하려면 0을 입력하세요\n 입력: ");
            scanf("%d", &nextOrder);
        }
        printf("\n총 %d개 제품 %d원입니다. 안녕히가십시오.\n", total, totalPrice);

    return 0;
}

int selectFunction(char product[]) 
{
    int innerCount = 0;
    printf("\n%s를 몇개 주문하시겠습니까?\n 입력: ", product);
    scanf("%d", &innerCount);
    printf("\n%s를 %d개 주문합니다\n", product, innerCount);
    return innerCount;
}
