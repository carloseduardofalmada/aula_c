#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Pede a primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    // Pede a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média
    media = (nota1 + nota2) / 2;

    // Mostra o resultado
    printf("A media e: %.2f\n", media);

    return 0;
}