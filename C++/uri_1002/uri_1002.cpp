#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double R,A;
    cin >> R;
    A = 3.141593 * (R * R);
    cout << fixed << setprecision(4) << A << endl;

    return 0;
}