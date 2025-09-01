#include <stdio.h>

int main() {
    char c;
    printf("Ingresa un carácter: ");
    scanf(" %c", &c);

    if (c >= '0' && c <= '9') {
        printf("Es un dígito numérico.\n");
    } else {
        printf("No es un dígito.\n");
    }
    return 0;
}
