#include <iostream>

using namespace std;

long long calculateFactorial(int n) {
    if (n < 0) {
        return -1;
    }
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;

    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Wyznacz silnie liczby" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            long long factorialResult = calculateFactorial(a);
            if (factorialResult == -1) {
                cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
            } else {
                cout << "Silnia liczby " << a << " wynosi: " << factorialResult << endl;
            }
        } else if (wyjscie != 0) {
            cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }

    } while(wyjscie != 0);

    cout << "Koniec programu." << endl;
    return 0;
}
