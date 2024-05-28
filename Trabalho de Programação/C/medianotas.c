// um programa que calcula a média das notas de um aluno em uma disciplina

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, soma, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);
    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    printf("A media da nota do aluno eh : %.2f \n", media);
    return 0;
}