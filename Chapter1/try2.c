#include <stdio.h>

// 必須確保 a 和 b 不是同一個變量
#define SWAP(a, b) (a += b, b = a - b, a -= b)

// 也可以使用按位異或運来完成值的交換，而且此處也通過使用 if 来确保待交的是兩個不同的變量
#define SWAP1(a, b) if(&a != &b)(a = a ^ b, b = a ^ b, a = a ^ b)

#define pr(x) if(x){printf("abc");}

int main(void) {
    unsigned int a = 2, b = 5;
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);

    SWAP1(a, a);
    printf("a = %d, b = %d\n", a, b);

    pr(1)

    return 0;
}