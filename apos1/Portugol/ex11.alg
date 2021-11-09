algoritmo "ex11"

var
   n, menor, maior: inteiro
inicio

   escreva("Digite um número: ")
   leia( n )

   maior <- n
   menor <- n

   enquanto n <> 0 faca

      se(n > maior)entao
         maior <- n
      senao
         se(n < menor)entao
            menor <- n
         fimse
      fimse
      
      escreva("Digite um número: ")
      leia( n )
      
   fimenquanto
   
   escreval("Maior:", maior)
   escreval("Menor:", menor)

fimalgoritmo
