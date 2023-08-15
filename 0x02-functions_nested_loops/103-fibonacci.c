#include <stdio.h>

int main() {
    int sum = 0;
    int a = 1, b = 2, next;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }
        next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", sum);
    return 0;
}

