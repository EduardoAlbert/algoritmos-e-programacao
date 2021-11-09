// Resposta Exercício 2 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int medOuro, medPrata, medBronze;
    
    cout << "Digite o número de medalhas de OURO que o Brasil ganhou nas Olimpíadas:\n";
    cin >> medOuro;
    cout << "\nDigite o número de medalhas de PRATA que o Brasil ganhou nas Olimpíadas:\n";
    cin >> medPrata;
    cout << "\nDigite o número de medalhas de BRONZE que o Brasil ganhou nas Olimpíadas:\n";
    cin >> medBronze;
    
    cout << "\nO Brasil ganhou " << (medOuro+medPrata+medBronze) << " medalhas nas Olimpíadas.\n\n";
    
    return 0;
}