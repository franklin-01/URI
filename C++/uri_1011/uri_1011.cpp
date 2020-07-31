#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float R;
    cin >> R;

    cout << "VOLUME = " << fixed << setprecision(3) << (((4.0/3)*3.14159)*(pow(R, 3))) << endl;

    return 0;
}