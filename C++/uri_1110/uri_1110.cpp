#include <iostream>
#include <queue>

using namespace std;

int main (){
    int n, i; //declaradas as variaveis para numero de cartas e controle do laço for 

    while (true) //loop
    {
        cin >> n; //quantidade de cartas
        if(n==0) break; //interroper o numero caso 0 cartas sejam inseridas

        queue<int> cartas; //declaraçao da fila

        for (i = 1; i <= n; i++) //laço de repetiçao para inserir a quantidade de cartas
        {
            cartas.push(i);
        }

        cout << "Discarded cards: "; //mostra as cartas descartadas
        while (cartas.size() > 1)
        {
            if(cartas.size() != 2 ) //condicional para imprimir as cartas descartadas formatadas 
                cout << cartas.front() << ", ";
            else
                cout << cartas.front() << endl;
            cartas.pop();
            cartas.push(cartas.front());
            cartas.pop();
        }
        cout << "Remaining card: " << cartas.front() << endl; //imprime a carta restante
                
    }
    

    return 0;
}