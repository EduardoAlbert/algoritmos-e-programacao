// Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas.
// Fa�a um programa que receba o sal�rio fixo de um funcion�rio e o valor total de suas vendas.
// Calcule e mostre a comiss�o recebida em reais e o sal�rio final do funcion�rio (sal�rio fixo + comiss�o).

algoritmo "ex04"

var

   salario_fixo, vtotal_vendas, comissao, salario_final: real

inicio

      //Solicitar valores
      escreva("Sal�rio Fixo: R$")
      leia(salario_fixo)
      
      escreva("Valor total de vendas: R$")
      leia(vtotal_vendas)
      
      //Calcular comiss�o e sal�rio final
      comissao <- vtotal_vendas * 0.04
      salario_final <- salario_fixo + comissao
      
      //Mostrar valores
      escreval("Comiss�o: R$", comissao:6:2)
      escreva("Sal�rio Final: R$", salario_final:6:2)

fimalgoritmo
