#include <stdio.h>

int main()
{
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "João";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura); // %.2f mostra apenas 2 casas após o .
    printf("A opção é: %c\n", opcao);
}

// A seguir, você tem uma lista dos principais especificadores utilizados:

// %d: Imprime um inteiro no formato decimal.

// %i: Equivalente a %d.

// %f: Imprime um número de ponto flutuante no formato padrão.

// %e: Imprime um número de ponto flutuante na notação científica.

// %c: Imprime um único caractere.

// %s: Imprime uma cadeia (string) de caracteres.