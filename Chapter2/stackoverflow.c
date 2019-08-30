#include <stdio.h>

void hello(void)
{
    fprintf(stderr, "hello!\n");
}

void func(void)
{
    void *buf[10];               // 每個元素的大小就一個指針的大小，事實上可以 sizeof(void*)
    static int i;                // 此處的 static 不能省掉，省掉則不會報錯
    printf("%zd\n", sizeof(void *));
    for (i = 0; i < 100; i++)     // 越界了，這麼做篡改了函數的返回地址信息，使得函數不能正常返回
    {
        buf[i] = hello;
    }
//    int i;
//    void *a = &i;
//    for (i = 0; i < 100; i++) {
//        a++;
//        a = hello;
//    }
//    printf("a is: %p     &i is: %p.\n", a, &i);
}

int main(void)
{
    int buff[1000];

    func();

    return 0;
}