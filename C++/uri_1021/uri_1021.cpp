#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int notas[6]= {100, 50, 20, 10, 5, 2};
    double val, moedas[6]= {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    
    cin >> fixed >> setprecision(2) >> val;
    cout << "NOTAS:" << endl;
    for(int i : notas){
                cout << fixed << setprecision(0) << floor(val/i) << " nota(s) de R$ "<< i <<".00" << endl; 
                val= fmod(val, i);
    }
    cout << "MOEDAS:" << endl;
    for(double i : moedas){
               
                cout << setprecision(0) << floor(val/i) << " moeda(s) de R$ " << fixed << setprecision(2) << i << endl; 
                val = fmod(val, i);
    }
    return 0;
}