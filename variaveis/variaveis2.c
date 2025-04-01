#include <stdio.h>

int main()
{
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é %d \n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);
    printf("O nome é: %s \n", nome);

    printf("Digite um caracter: \n");
    scanf(" %c", &opcao);
    printf("O caracter é: %c", opcao);
}

// A seguir, você tem uma lista dos principais especificadores utilizados:

// %d: Imprime um inteiro no formato decimal.

// %i: Equivalente a %d.

// %f: Imprime um número de ponto flutuante no formato padrão.

// %e: Imprime um número de ponto flutuante na notação científica.

// %c: Imprime um único caractere.

// %s: Imprime uma cadeia (string) de caracteres.