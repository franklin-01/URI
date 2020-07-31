#include <iostream>

using namespace std;

int main()
{
    int val,notas[7]= {100, 50, 20, 10, 5, 2, 1};
    
    cin >> val;
    cout << val << endl;
    for(int i : notas){
                cout << val/i << " nota(s) de R$ "<< i <<",00" << endl; 
                val%= i;
    }
    return 0;
}