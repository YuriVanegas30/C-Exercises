#include <stdio.h>

int main() {
    char c;
    printf("Ingresa una letra minúscula: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        char mayus = c - 32;
        printf("La versión mayúscula es: %c\n", mayus);
    } else {
        printf("No ingresaste una letra minúscula.\n");
    }
    return 0;
}
