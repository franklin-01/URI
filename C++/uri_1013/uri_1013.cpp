#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    cout << (((((A+B)+abs(A-B))/2)+C+abs((((A+B)+abs(A-B))/2)-C))/2) << " eh o maior" << endl;
}