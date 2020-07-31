#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X;
    float Y;
    cin >> X >> fixed >> setprecision(1) >> Y;
    cout << fixed << setprecision(3)<< (X/Y) << " km/l" << endl;
    
    return 0;
}