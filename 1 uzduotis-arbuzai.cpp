/******************************************************************************

                             Pirmasis darbas

Uzduotis: https://codeforces.com/problemset/problem/4/A
                             
*******************************************************************************/
using namespace std;
#include <iostream>

string canDivideWatermelon(int w) {
    // Patikrinti ar lyginis skaicius ir ar įvestas svoris daugiau negu 2
    if (w % 2 == 0 && w > 2) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    // Nuskaitoma zmogaus ivestis
    int w;
    cin >> w;

    // Atspausdinamas rezultatas "YES" arba "NO"
    cout << canDivideWatermelon(w) << endl;

    return 0;
}