#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita: ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Sprawdz czy pierwsza (liczba a)" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            if (isPrime(a)) {
                cout << "Liczba " << a << " jest liczba pierwsza." << endl;
            } else {
                cout << "Liczba " << a << " nie jest liczba pierwsza." << endl;
            }
        } else if (wyjscie != 0) {
            cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }

    } while(wyjscie != 0);
    return 0;
}
