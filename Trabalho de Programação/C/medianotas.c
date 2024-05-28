#include <stdio.h>  // Inclui a biblioteca de entrada e saída
#include <stdlib.h> // Inclui a biblioteca de funções utilitárias
float calcular_media(float nota1, float nota2, float nota3) { // Função que calcula a média 
    return (nota1 + nota2 + nota3) / 3;                             //das três notas
}
void verificar_aprovacao(float media) { // Função que verifica se o aluno está aprovado ou reprovado
    if (media >= 6.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}
int main() {
    float nota1, nota2, nota3, media;
    while (1) { // Comando de repetição para processar múltiplos alunos
        printf("Digite a primeira nota (ou -1 para sair): ");
        scanf("%f", &nota1);
        if (nota1 == -1) break;
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if (nota2 == -1) break;
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        if (nota3 == -1) break;
        media = calcular_media(nota1, nota2, nota3); // Calcula a média das notas
        printf("A media das notas eh: %.2f\n", media);
        verificar_aprovacao(media); // Verifica se o aluno está aprovado ou reprovado
        printf("\n");
    } return 0;
    
}
