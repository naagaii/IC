import java.util.Scanner; // Importa a classe Scanner para leitura de dados do usuário
public class Main { // Função que calcula a média das três notas
    public static float calcularMedia(float nota1, float nota2, float nota3) {
        return (nota1 + nota2 + nota3) / 3;}
    public static void verificarAprovacao(float media) { // Função que verifica se o aluno 
        if (media >= 6.0) {                                 //está aprovado ou reprovado
            System.out.println("Aprovado");
        } else {
            System.out.println("Reprovado"); } } 
        public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float nota1, nota2, nota3, media;
        while (true) {  // Comando de repetição para processar múltiplos alunos
            System.out.println("Digite a primeira nota (ou -1 para sair): ");
            nota1 = scanner.nextFloat();
            if (nota1 == -1) break;
            System.out.println("Digite a segunda nota: ");
            nota2 = scanner.nextFloat();
            if (nota2 == -1) break;
            System.out.println("Digite a terceira nota: ");
            nota3 = scanner.nextFloat();
            if (nota3 == -1) break;
            media = calcularMedia(nota1, nota2, nota3); // Calcula a média das notas
            System.out.println("A media das notas é: " + media);
            verificarAprovacao(media); // Verifica se o aluno está aprovado ou reprovado
            System.out.println(); }
        System.out.println("Programa encerrado.");
        scanner.close(); // Fecha o scanner
    }
}
