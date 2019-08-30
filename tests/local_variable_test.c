#include <stdio.h>

char *int_to_str(int);

int main(void)
{
    printf("%s\n", int_to_str(1234));
}

char *int_to_str(int int_value)
{
    char buf[20];

    sprintf(buf, "%d", int_value);

    return buf;
}