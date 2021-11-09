algoritmo "ex12"

var
   nums: vetor[1..10] de inteiro
   cont: inteiro
inicio

   para cont de 1 ate 10 faca
      escreva("Digite o valor", cont, ": ")
      leia(nums[cont])
   fimpara
   
   para cont de 10 ate 1 passo -1 faca
      escreval("Valor", cont, ":", nums[cont])
   fimpara

fimalgoritmo
