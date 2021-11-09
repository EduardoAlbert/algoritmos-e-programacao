// Desenvolva um algoritmo que:

// Solicite o nome do usuário;
// Solicite o ano de nascimento e o ano atual;
// Calcule a idade em dias;
// Mostre o nome e a idade calculada.

algoritmo "ex03"

var

   nome: literal
   ano_nasc, ano_atual, idade_dias: inteiro

inicio

      //Solicitar dados
      escreva("Nome: ")
      leia(nome)

      escreva("Ano de nascimento: ")
      leia(ano_nasc)

      escreva("Ano atual: ")
      leia(ano_atual)

      //Calcular idade em dias
      idade_dias <- (ano_atual - ano_nasc) * 365

      //Mostrar nome e idade em dias
      escreva(nome, ", sua idade equivale a", idade_dias, " dias.")

fimalgoritmo


