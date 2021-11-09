// Faça um algoritmo que peça o nome do usuário e sua idade.
// Se a idade for maior ou igual que 18 anos, escreva: Fulano, você já pode obter sua CNH;
// Se a idade for menor que 18 anos, escreva: Fulano, você não pode obter sua CNH;
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
      escreva(nome, ", você já pode obter sua CNH.")
   senao
      escreva(nome, ", você não pode obter sua CNH.")
   fimse

fimalgoritmo
