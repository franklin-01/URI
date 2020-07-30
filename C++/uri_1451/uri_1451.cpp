#include <iostream>
#include <list>
using namespace std;

int main()
{
  int i;              //varivavel de controle para o FOR
  string entrada;     //variavel para entrada dos dados
  list<char> texto;   //lista de characters

    while (cin >> entrada)           //loop para recebimendo dos dados
     {
       texto.clear();                //apaga todos os elementos da lista
       auto atual = texto.begin();   //cria um iterator apontado para o inicio da lista

      for (i = 0; entrada[i] != '\0' ; i++) //FOR para leitura dos dados inserido,utilizando '\0' (ultimo elemento de uma string 'NULLcharacter' ),
       {                                    //para a instrucao do FOR
        if (entrada[i] == ']')        //verifica se a atual posicao 'i' em 'entrada' possui o character ']'
        {
          atual = texto.end();        //caso ele possua, o iterator aponta para o final da lista
        }
        else if (entrada[i] == '[')   //verifica se a atual posicao 'i' em 'entrada' possui o character '['
        {
          atual = texto.begin();      //caso ele possua, o iterator aponta para o inicio da lista
        }
        if (entrada[i] != '[' && entrada[i] != ']') //verifica se a atual posicao 'i' em 'entrada' eh '[' ou ']'
        {
          texto.insert(atual, entrada[i]);          //caso nao seja nenhum dos characters ele insere o elemento na lista
        }
      }
      for (atual = texto.begin(); atual != texto.end(); atual++) { //FOR para impessao dos elementos da lista 'texto'
        cout << *atual;   //imprime o conteudo referenciado pelo ponteiro 'atual'
      }
      cout << '\n';       // EOF
    }
  return 0;
}
