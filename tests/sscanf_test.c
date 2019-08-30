#include <stdio.h>

int main(void)
{
    int i;
    char *str = "Hello World 2002", s1[10],s2[10];

    sscanf(str, "%s%s%d", s1, s2,&i);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%d\n", i);
    return 0;
}