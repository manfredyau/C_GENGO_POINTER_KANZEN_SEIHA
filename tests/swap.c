#include <stdio.h>

#define swap(a, b)   (a ^= b, b ^= a, a ^= b)

int main(void)
{
    unsigned int a = 2, b = 12213;
    swap(a, b);

    printf("%d\n", a);
    printf("%d\n", b);
}