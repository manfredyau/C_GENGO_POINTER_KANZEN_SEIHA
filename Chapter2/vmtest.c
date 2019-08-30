#include <stdio.h>
/* 本程式旨在透過開啟兩個命令行窗口，來測试相應變量的內存地址是否相同
 * 因此，運行本程式時請使用命令行窗口來開啟
 *
 * 按下 Ctrl + F9 即可生成 .exe 文件*/
int main(void)
{
    int hoge;
    char buf[256];

    printf("&hoge...%p\n", &hoge);
    printf("Input initial value.\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &hoge);

    for(;;)
    {
        printf("hoge..%d\n", hoge);
        getchar();
        hoge++;
    }

    return 0;
}