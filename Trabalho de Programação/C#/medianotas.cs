using System; // Inclui o namespace System
class Program
        static float CalcularMedia(float nota1, float nota2, float nota3) // Função que calcula 
        {  return (nota1 + nota2 + nota3) / 3; }                           //a média das três notas
        static void VerificarAprovacao(float media) { // Função que verifica se o aluno                                                   //está aprovado ou reprovado
        if (media >= 6.0f){
            Console.WriteLine("Aprovado");}
        else{
            Console.WriteLine("Reprovado"); } }
     static void Main(string[] args){
        float nota1, nota2, nota3, media;
            while (true){ // Comando de repetição para processar múltiplos alunos
            Console.WriteLine("Digite a primeira nota (ou -1 para sair): ");
            nota1 = float.Parse(Console.ReadLine());
            if (nota1 == -1) break;
            Console.WriteLine("Digite a segunda nota: ");
            nota2 = float.Parse(Console.ReadLine());
            if (nota2 == -1) break;
            Console.WriteLine("Digite a terceira nota: ");
            nota3 = float.Parse(Console.ReadLine());
            if (nota3 == -1) break;
            media = CalcularMedia(nota1, nota2, nota3); // Calcula a média das notas
            Console.WriteLine("A media das notas é: {0}", media);
            VerificarAprovacao(media); // Verifica se o aluno está aprovado ou reprovado
            Console.WriteLine();
        }
    }

