// Fa�a um algoritmo que pe�a o nome do usu�rio e sua idade.
// Se a idade for maior ou igual que 18 anos, escreva: Fulano, voc� j� pode obter sua CNH;
// Se a idade for menor que 18 anos, escreva: Fulano, voc� n�o pode obter sua CNH;
// OBS: Fazer utilizando o comando SE/SENAO

algoritmo "ex06"

var

   nome: literal
   idade: inteiro

inicio

   escreva("Nome: ")
   leia(nome)
   
   escreva("Idade: ")
   leia(idade)
   
   se (idade >= 18) entao
      escreva(nome, ", voc� j� pode obter sua CNH.")
   senao
      escreva(nome, ", voc� n�o pode obter sua CNH.")
   fimse

fimalgoritmo
