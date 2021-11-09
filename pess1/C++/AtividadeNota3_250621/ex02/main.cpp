#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    // Pergunta 1
    string nome;
    cout << "Olá, qual é o seu nome? ";
    cin >> nome;
    cout << "Credo! " << nome << " é um nome bem estranho!\n";
    
    
    // Pergunta 2
    cout << "\nSe fosse para ter outro nome, qual você escolheria? ";
    cin >> nome;
    int i = 0;
    while (i < 3)
    {   
        cout << "Horrível também, tente outro: ";
        cin >> nome;
        i++;
    }
    cout << "Nossa, um pior do que o outro, você e seus pais não tem bom gosto mesmo, é de família...\n";
    
    
    // Pergunta 3
    char sexo;
    cout << "\nMeu gosto com certeza é melhor que o seu, vou te dar um nome mais bonito.\n";
    cout << "Mas antes preciso saber se você é menino ou menina...\n";
    cout << "Digite M para Masculino ou F para Feminino: ";
    cin >> sexo;
    if (sexo == 'M')
    {
        nome = "Jubiskleison";
        
    } else {
        nome = "Jubiskleia";
    }
    cout << "Ok, seu nome agora é " << nome << "!\n";
    
    
    // Pergunta 4
    char resposta_nome;
    cout << "\nGostou do seu novo nome?\n";
    cout << "Sim (s) ou Não (n): ";
    cin >> resposta_nome;
    switch(resposta_nome) 
    {
        case 's':
            cout << "Ótimo, esse sim é um bom nome.";
            break;
        case 'n':
            cout << "Pouco importa se você gostou ou não, seu gosto é ruim, vou te chamar assim de qualquer jeito!";
            break;
        default:
            cout << "Poxa" << nome << ", era para responder com s ou n, você é meio burro(a)...";
    }
    
    
    // Pergunta 5
    int opcao_fazer;
    cout << "\n\n" << nome << ", o que você mais gosta de fazer?\n";
    cout << "1 - Assistir televisão.\n";
    cout << "2 - Comer\n";
    cout << "3 - Jogar games\n";
    cout << "4 - Outro\n";
    cout << "Digite o número da opção: ";
    cin >> opcao_fazer;
    switch (opcao_fazer) 
    {
        case 1:
            cout << "Nossa, você deve ser um inútil que fica o dia inteiro com o traseiro no sofa vendo bobagens...";
            break;
        case 2:
            cout << "Vai limpar esses dedos sujos de gordura, tá lambuzando todo o teclado.";
            break;
        case 3:
            cout << "Estudar ninguém quer não é? Vou mandar mensagem para que sua mãe controle mais isso!";
            break;
        case 4:
            cout << "Como assim não prefere uma dessas opções? Você é bem estranho(a)...";
            break;
        default:
            cout << "Acorda " << nome << "! Você é meio lerdo...";
    }
    
    
    // Pergunta 6
    int num;
    cout << "\n\nO que eu mais gosto de fazer é calcular, tenho todas as tabuadas na minha memória, quer ver só?\n";
    cout << "Digite um número entre 1 e 10: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
    cout << "Viu? Eu sou muito INTELIGENTE!!!\n";
    
    
    // Pergunta 7
    int respConta;
    cout << "\nAposto que você não sabe tanto quanto eu, vamos testar!\n";
    cout << "Quanto é 2 + 2? ";
    cin >> respConta;
    do
    {
        cout << "Tem certeza disso? Tente novamente...\n";
        cout << "2 + 2 é? ";
        cin >> respConta;
    } while (respConta == 4);
    cout << "Erooooou! Mas que burrice!\n";
    
    
    // Pergunta 8
    int idade;
    cout << "\nQuantos anos você tem? ";
    cin >> idade;
    
    if (idade <= 19){
        cout << "Você ainda é jovem, mas já devia saber quanto é 2 + 2 né... melhore!";
    } else if (idade >= 20 && idade <= 59) {
        cout << "Um adulto que não sabe quanto é 2 + 2, o Brasil está perdido mesmo...";
    } else {
        cout << "O tempo não fez muito bem para sua memória hein... Tenho pena dos seus netos.";
    }
    
    cout << "\nAdeus, " << nome << ".";
    
    return 0;
}