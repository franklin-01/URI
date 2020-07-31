#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    cout << fixed << setprecision(3) << ((X*Y)/12.0) << endl;

    return 0;
}