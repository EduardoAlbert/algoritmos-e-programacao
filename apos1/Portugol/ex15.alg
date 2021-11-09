algoritmo "ex15"

var
   nt1, nt2, nt3:real
   tipo:literal
inicio

   funcao calc_media(n1, n2, n3:real; tipo:literal):real
      var
         media:real
      inicio

         escolha(tipo)
            caso "A"
               media <- (n1 + n2 + n3) / 3
            caso "P"
               media <- ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10
         fimescolha

         retorne media

      fimfuncao

   escreval("Notas do Aluno:")
   escreva("Nota 1: ")
   leia(nt1)
   escreva("Nota 2: ")
   leia(nt2)
   escreva("Nota 3: ")
   leia(nt3)

   escreval("Tipo de Média:")
   escreval("A - Aritmética")
   escreval("P - Ponderada")
   leia(tipo)

   escreval("Média: ", calc_media(nt1, nt2, nt3, maiusc(tipo)):2:1)

fimalgoritmo
