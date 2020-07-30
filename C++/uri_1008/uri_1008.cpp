#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int fnc, hrs;
    float vlr;
    cin >> fnc;
    cin >> hrs;
    cin >> vlr;

    cout << "NUMBER = " << fnc << endl << "SALARY = U$ " << fixed << setprecision(2) << (hrs*vlr) << endl;

    return 0;
}