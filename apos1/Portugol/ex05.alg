// Um trabalhador recebeu o seu salário e o depositou em sua conta corrente bancária.
// Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
// Sabe-se que cada operação bancária de retirada paga um imposto de 0.38% (0.0038) sobre o valor retirado
// e o saldo inicial da conta está zerado.
// Desenvolva um algoritmo que receba o salário do trabalhador, o valor do primeiro cheque,
// o valor do segundo cheque e mostre ao final quanto sobrou na conta do trabalhador.

algoritmo "q01"

var
   sld_inicial, cheque1, cheque2, saque_total, sld_final: real
inicio
   escreva("Salário: R$")
   leia(sld_inicial)

   escreva("Cheque 1: R$")
   leia(cheque1)

   escreva("Cheque 2: R$")
   leia(cheque2)

   saque_total <- cheque1 + cheque2
   sld_final <- sld_inicial - saque_total * 1.0038

   escreva("Saldo Atual: R$", sld_final:6:2)
fimalgoritmo
