// um programa que calcula a média das notas de um aluno em uma disciplina

#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, soma, media;
    cout << "Digite a primeira nota:" << endl;
    cin >> nota1;
    cout << "Digite a segunda nota:" << endl;
    cin >> nota2;
    cout << "Digite a terceira nota:" << endl;
    cin >> nota3;
    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    cout << "A media da nota dos alunos eh: " << media << endl;
    return 0;
}
