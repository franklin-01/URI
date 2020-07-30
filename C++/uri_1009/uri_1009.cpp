#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    string nm;
    float slr,vds;
    cin >> nm;
    cin >> slr;
    cin >> vds;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << (slr+(vds*0.15)) << endl;

    return 0;
}