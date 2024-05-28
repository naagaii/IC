using System;

class Program
{
    static void Main(string[] args)
    {
        float nota1, nota2, nota3, soma, media;
        Console.WriteLine("Digite a primeira nota:");
        nota1 = float.Parse(Console.ReadLine());
        Console.WriteLine("Digite a segunda nota:");
        nota2 = float.Parse(Console.ReadLine());
        Console.WriteLine("Digite a terceira nota:");
        nota3 = float.Parse(Console.ReadLine());
        soma = nota1 + nota2 + nota3;
        media = soma / 3;
        Console.WriteLine("A media da nota dos alunos eh: {0}", media);
    }
}
