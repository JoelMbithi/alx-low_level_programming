#include <stdio.h>

void print_fibonacci(int n);

int main() {
    print_fibonacci(98);
    return 0;
}

void print_fibonacci(int n) {
    int a = 1, b = 2;

    if (n >= 1) {
        printf("%d", a);
    }

    for (int i = 1; i < n; i++) {
        printf(", %d", b);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

