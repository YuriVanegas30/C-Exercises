#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    char letra;
    int contador = 0;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    printf("Ingresa la letra a contar: ");
    scanf(" %c", &letra);

    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces.\n", letra, contador);
    return 0;
}
