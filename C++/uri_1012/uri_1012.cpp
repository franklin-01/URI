#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float A,B,C;
    cin >> A >> B >> C;
    cout << "TRIANGULO: " << fixed << setprecision(3) << ((A*C)/2) << endl
        << "CIRCULO: " << fixed << setprecision(3) << ((pow(C,2)*3.14159))<< endl
        << "TRAPEZIO: " << fixed << setprecision(3) << (((A+B)*C)/2) << endl
        << "QUADRADO: " << fixed << setprecision(3) << (pow(B, 2)) << endl
        << "RETANGULO: " << fixed << setprecision(3) << (A*B) << endl ;
    return 0;
}