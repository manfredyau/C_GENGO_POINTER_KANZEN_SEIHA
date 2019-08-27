#include <stdio.h>

int arr[100];
int main(void) {
    setbuf(stdout, 0);
    int i;
    for (i = 0; i < 100; i++) {
        printf("%6d", arr[i]);
    }
}