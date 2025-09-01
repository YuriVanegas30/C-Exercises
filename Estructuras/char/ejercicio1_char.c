#include <stdio.h>

int main() {
    char c;
    printf("Ingresa una letra: ");
    scanf(" %c", &c);  // Espacio antes de %c para evitar errores por el salto de línea

    // Convertir a minúscula si es necesario
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }

    if ((c >= 'a' && c <= 'z')) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("Es una vocal.\n");
        } else {
            printf("Es una consonante.\n");
        }
    } else {
        printf("No es una letra válida.\n");
    }
    return 0;
}
