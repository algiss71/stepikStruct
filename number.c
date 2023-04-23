#include <stdio.h>

int main() {
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    printf("Простые множители числа %d: ", n);
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    return 0;
}