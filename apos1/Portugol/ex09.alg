algoritmo "ex09"

var

   limit, cont, num, maior: inteiro

inicio

   escreva("Solicitar quantos números? ")
   leia(limit)

   para cont de 1 ate limit faca

      escreva(cont, "º Número: ")
      leia(num)

      se ((cont = 1) ou (num > maior)) entao
         maior <- num
      fimse

   fimpara

   escreva("Maior número digitado:", maior)

fimalgoritmo
