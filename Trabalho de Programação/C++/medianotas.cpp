#include <iostream> // Inclui a biblioteca padrão de entrada e saída
using namespace std;
float calcular_media(float nota1, float nota2, float nota3) { // Função que calcula a média 
    return (nota1 + nota2 + nota3) / 3;                               //das três notas
}
void verificar_aprovacao(float media) {  // Função que verifica se o aluno está aprovado
    if (media >= 6.0) {                                  // ou reprovado
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
}
int main() {
    float nota1, nota2, nota3, media;
    while (true) { // Comando de repetiçãoo para processar múltiplos alunos
        cout << "Digite a primeira nota (ou -1 para sair): ";
        cin >> nota1;
        if (nota1 == -1) break;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        if (nota2 == -1) break;
        cout << "Digite a terceira nota: ";
        cin >> nota3;
        if (nota3 == -1) break;
        media = calcular_media(nota1, nota2, nota3); // Calcula a média das notas
        cout << "A media das notas eh: " << media << endl;
        verificar_aprovacao(media); // Verifica se o aluno está aprovado ou reprovado
        cout << endl;
    } return 0;
}
