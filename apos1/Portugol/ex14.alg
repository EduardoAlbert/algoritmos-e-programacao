algoritmo "ex14"

var
   num:inteiro
inicio

   procedimento tabuada(n:inteiro)
      var
         c:inteiro
      inicio
      
         para c de 1 ate 10 faca
            escreval(n, " X", c, " =", n * c)
         fimpara
      
      fimprocedimento

   escreva("Mostrar a tabuada de qual número? ")
   leia(num)
   tabuada(num)
      
fimalgoritmo
