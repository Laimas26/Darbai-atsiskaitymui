/******************************************************************************

                             Pirmasis darbas

Uzduotis: https://codeforces.com/problemset/problem/236/A
                             
*******************************************************************************/
using namespace std;

#include <set>;
#include <iostream>

int boyOrGirl(set<char> disChar) {
    // 
    int res;
    if (disChar.size() % 2 == 0)
        res = 1;
    else
        res = 0;

    return res;
}

set<char> distinctCharacters(string name)
{
    set<char> distinctChars(name.begin(), name.end());

    return distinctChars;
}

void printResult(int result)
{
    if (result == 1)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

int main() {
    // Nuskaitoma zmogaus ivestis
    string name;

    cout<<"Iveskite varda: ";
    cin >> name;
    
    // Grazina rezultata, 0 = Male, 1 = Female
    int result = boyOrGirl(distinctCharacters(name));

    printResult(result);


    return 0;
}