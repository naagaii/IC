// um programa que calcula a média das notas de um aluno em uma disciplina

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float nota1, nota2, nota3, soma, media;
        System.out.println("Digite a primeira nota:");
        nota1 = scanner.nextFloat();
        System.out.println("Digite a segunda nota:");
        nota2 = scanner.nextFloat();
        System.out.println("Digite a terceira nota:");
        nota3 = scanner.nextFloat();
        soma = nota1 + nota2 + nota3;
        media = soma / 3;
        System.out.println("A media da nota dos alunos eh: " + media);
        scanner.close();
    }
}
