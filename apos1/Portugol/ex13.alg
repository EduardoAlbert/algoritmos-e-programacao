algoritmo "ex13"

var
   matriz: vetor[1..5, 1..5] de inteiro
   linha, coluna: inteiro
inicio

   // Preencher Matriz
   para linha de 1 ate 5 faca
      para coluna de 1 ate 5 faca
         escreva("Digite o valor da posição [", linha:1, ",", coluna:1, "]: ")
         leia(matriz[linha, coluna])
      fimpara
   fimpara

   // Exibir Diagonal Principal
   escreva("Elementos da Diagonal Principal: [")
   para linha de 1 ate 5 faca
      para coluna de 1 ate 5 faca
         se(linha = coluna) entao
            escreva(matriz[linha, coluna])
         fimse
      fimpara
   fimpara
   escreva(" ]")

fimalgoritmo
