# Função que calcula a média das três notas
def calcular_media(nota1, nota2, nota3):
    return (nota1 + nota2 + nota3) / 3
def verificar_aprovacao(media): # Função que verifica se o aluno está aprovado ou reprovado
    if media >= 6.0:
        return "Aprovado"
    else:
        return "Reprovado"
while True: # Comando de repetição para processar múltiplos alunos
    # Solicita ao usuário a primeira nota
    nota1 = float(input("Digite a primeira nota (ou -1 para sair): "))
    if nota1 == -1:
        break
    # Solicita ao usuário a segunda nota
    nota2 = float(input("Digite a segunda nota: "))
    if nota2 == -1:
        break
    # Solicita ao usuário a terceira nota
    nota3 = float(input("Digite a terceira nota: "))
    if nota3 == -1:
        break
    media = calcular_media(nota1, nota2, nota3) # Calcula a média das notas
    print(f"A media das notas é: {media:.2f}")
    print(f"O aluno está: {verificar_aprovacao(media)}\n") # Verifica se o aluno está aprovado 
                                                                    #ou reprovado
