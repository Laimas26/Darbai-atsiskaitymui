/******************************************************************************

                             Ketvirtasis darbas

Uzduotis: https://codeforces.com/problemset/problem/1256/A
                             
*******************************************************************************/
using namespace std;

#include <vector>;
#include <iostream>


string countCoins(int a, int b, int n, int S) {
    // Tikrinama ar galima pasiekti kainos verte S
        if (S <= a * n + b && S % n <= b) {
            return "YES";
        } else {
            return "NO";
        }

}

int main() {
    int count;
    int a; // Coins su value kiekis
    int b; // 1 vertes coins verte
    int n; // Coins su value verte
    int S; // Pirkinio kaina

    cout<<"Iveskite bandymu kartu kieki: ";
    cin >> count;
    
    for (int i = 0; i < count; ++i) {
        string str;
        cin >> a;
        cin >> b;
        cin >> n;
        cin >> S;

        string result = countCoins(a,b,n,S);
        cout << result << endl;
    }

    return 0;
}