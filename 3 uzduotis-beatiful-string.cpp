/******************************************************************************

                             Treciasis darbas

Uzduotis: https://codeforces.com/problemset/problem/1265/A
                             
*******************************************************************************/
using namespace std;

#include <vector>;
#include <iostream>


string createBeautifulString(const string& s) {
    string beautifulString = s;

    for (int i = 0; i < beautifulString.size(); ++i) {
        if (beautifulString[i] == '?') {
            // '?' pakeitimas i raides 'a', 'b', ir 'c'
            for (char ch = 'a'; ch <= 'c'; ++ch) {
                // Patikrinamas ar vis dar tekstas 'grazus'
                if (i == 0 || ch != beautifulString[i - 1]) {
                    // Tikrinamas character su sekanciu, ar toks pats ar ne
                    if (i == beautifulString.size() - 1 || ch != beautifulString[i + 1]) {
                        beautifulString[i] = ch;
                        break;
                    }
                }
            }
        }
    }

    // Patikrinti ar tekstas 'grazus'
    for (int i = 0; i < beautifulString.size() - 1; ++i) {
        if (beautifulString[i] == beautifulString[i + 1]) {
            return "-1";  // 'Negrazaus teksto rezultatas
        }
    }

    return beautifulString;
}

int main() {
    int count;

    cout<<"Iveskite 'strings' kieki: ";
    cin >> count;
    
    for (int i = 0; i < count; ++i) {
        string str;
        cin >> str;

        string result = createBeautifulString(str);
        cout << result << endl;
    }

    return 0;
}