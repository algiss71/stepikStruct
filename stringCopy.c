#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "To be or not to be";
    char str2[40];
    char str3[40];

    /* копирование в буфер фиксированного размера (безопасно при переполнении): */
    strncpy(str2, str1, sizeof(str2));

    /* частичное копирование (только 5 символов): */
    strncpy(str3, str2, 5);
    str3[5] = '\0'; /* вручную добавлен нулевой символ */

    puts(str1);
    puts(str2);
    puts(str3);

    return 0;
}