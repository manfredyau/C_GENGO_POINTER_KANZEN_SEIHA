#include <stdio.h>

int main(void)
{
    char buf[10];
    fgets(buf, 20, stdin);
    puts(buf);
    return 0;
}