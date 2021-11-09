// Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
// Faça um programa que receba o salário fixo de um funcionário e o valor total de suas vendas.
// Calcule e mostre a comissão recebida em reais e o salário final do funcionário (salário fixo + comissão).

algoritmo "ex04"

var

   salario_fixo, vtotal_vendas, comissao, salario_final: real

inicio

      //Solicitar valores
      escreva("Salário Fixo: R$")
      leia(salario_fixo)
      
      escreva("Valor total de vendas: R$")
      leia(vtotal_vendas)
      
      //Calcular comissão e salário final
      comissao <- vtotal_vendas * 0.04
      salario_final <- salario_fixo + comissao
      
      //Mostrar valores
      escreval("Comissão: R$", comissao:6:2)
      escreva("Salário Final: R$", salario_final:6:2)

fimalgoritmo
