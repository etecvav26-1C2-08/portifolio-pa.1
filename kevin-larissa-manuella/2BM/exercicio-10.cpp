* Instituição: etecvav
* Data: 27/05/2026
* Autor:Manuella Salvador
* Descrica:oSimule um jogo de adivinhação. O programa deve gerar um
* número aleatório e o jogador precisa acertar o número. Cada vez
* que o jogador informar o número, deverá exibir se o palpite é
* muito alto, muito baixo ou correto. Quando for correto, exiba
* quantidade de palpitações.
*/
#include <iostream>
using namespace std;

//declarando as variavéis
int main() {
   int numerosecreto = 7; //valor fixo
   int palpite;
   int tentativas = 0;

//perguntando e lendo o palpite 
  cout << "Digite seu palpite: ";
  cin >> palpite;
  
//condição do jogo, se for muito baixo ou alto e quando acerta o numero
 if (palpite > numerosecreto) {
cout << "Muito alto" << endl;
 } else if (palpite < numerosecreto) {
  cout << "Muito baixo" << endl;
  } else {
   cout << "Você acertou!!!" << endl;
}
 return 0;
}