// Construa um algoritmo que,
// recebendo os valores de vendas do mês de determinado vendedor (VM) e o nome do mesmo (NOME).
// Ao final apresente o nome e a mensagem de acordo com a regra:

// Quando o valor da venda estiver entre R$ 10.000,00 e R$ 50.000,00 (inclusive) mensagem:
// “A venda está ideal”;

// Caso a venda seja menor do que R$ 10.000,00 mensagem:
// "A venda está baixa";

// Caso venda superior a R$ 50.000,00 mostre a mensagem
// "A venda está ótima".

algoritmo "q02"

var
   nome: literal
   val_vendas: real
inicio
   escreva("Nome: ")
   leia(nome)
   
   escreva("Valor de vendas: R$")
   leia(val_vendas)

   escreval("Olá, ", nome, ".")

   se (val_vendas < 10000) entao
      escreva("A venda está baixa...")
   senao
      se (val_vendas >= 10000) e (val_vendas < 50000) entao
         escreva("A venda está ideal.")
      senao
         escreva("A venda está ótima!")
      fimse
   fimse
fimalgoritmo
