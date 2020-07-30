#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cp1, np1, cp2, np2;
    float pp1, pp2, total;
    cin >> cp1 >> np1 >> fixed >> setprecision(2) >> pp1 >> cp2 >> np2 >> fixed >> setprecision(2) >> pp2;
    total = np1*pp1+np2*pp2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}