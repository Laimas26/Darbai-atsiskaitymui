/******************************************************************************

                             Penktasis darbas

Uzduotis: https://codeforces.com/problemset/problem/1342/A
                             
*******************************************************************************/
using namespace std;

#include <vector>;
#include <iostream>


int countPrice(int x, int y, int a, int b) {
    // Tikrinama ar galima pasiekti kainos verte S
    int price = 0;

    if (x <= y)
    {
        while(x > 0)
        {
            price += b;
            x--;
            y--;
        }

        while(y > 0)
        {
            price += a;
            y--;
        }

        return price;
    }

    else if (x >= y)
    {
        while(y > 0)
        {
            price += b;
            x--;
            y--;
        }

        while(x > 0)
        {
            price += a;
            x--;
        }

        return price;
    }

}

int main() {
    int count;
    int x;
    int y;
    int a;
    int b;

    cout<<"Iveskite bandymu kartu kieki: ";
    cin >> count;
    
    for (int i = 0; i < count; ++i) {
        string str;
        cin >> x;
        cin >> y;
        cin >> a;
        cin >> b;

        int result = countPrice(x,y,a,b);
        cout << result << endl;
    }

    return 0;
}