// Construa um algoritmo que,
// recebendo os valores de vendas do m�s de determinado vendedor (VM) e o nome do mesmo (NOME).
// Ao final apresente o nome e a mensagem de acordo com a regra:

// Quando o valor da venda estiver entre R$ 10.000,00 e R$ 50.000,00 (inclusive) mensagem:
// �A venda est� ideal�;

// Caso a venda seja menor do que R$ 10.000,00 mensagem:
// "A venda est� baixa";

// Caso venda superior a R$ 50.000,00 mostre a mensagem
// "A venda est� �tima".

algoritmo "q02"

var
   nome: literal
   val_vendas: real
inicio
   escreva("Nome: ")
   leia(nome)
   
   escreva("Valor de vendas: R$")
   leia(val_vendas)

   escreval("Ol�, ", nome, ".")

   se (val_vendas < 10000) entao
      escreva("A venda est� baixa...")
   senao
      se (val_vendas >= 10000) e (val_vendas < 50000) entao
         escreva("A venda est� ideal.")
      senao
         escreva("A venda est� �tima!")
      fimse
   fimse
fimalgoritmo
