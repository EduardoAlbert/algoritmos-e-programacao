algoritmo "ex09"

var

   limit, cont, num, maior: inteiro

inicio

   escreva("Solicitar quantos n�meros? ")
   leia(limit)

   para cont de 1 ate limit faca

      escreva(cont, "� N�mero: ")
      leia(num)

      se ((cont = 1) ou (num > maior)) entao
         maior <- num
      fimse

   fimpara

   escreva("Maior n�mero digitado:", maior)

fimalgoritmo
