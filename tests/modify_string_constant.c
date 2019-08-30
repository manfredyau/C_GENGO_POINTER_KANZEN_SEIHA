#include <stdio.h>

int main(void)
{
    char *str = "abc";
    str[2] = 'z';

    puts(str);

    return 0;
}