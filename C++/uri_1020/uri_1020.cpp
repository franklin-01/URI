#include <iostream>

using namespace std;

int main()
{
    int I;

    cin >> I;
    cout << I/365 << " ano(s)" << endl << (I%365)/30 << " mes(es)" << endl << (I%365)%30 << " dia(s)" << endl;

    return 0;
}