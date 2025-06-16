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
    cout << "Podaj 2 liczby calkowite: ";
    cin >> a >> b;

    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Wyznacz silnie liczby" << endl;
        cout << "2. Sprawdz czy pierwsza (liczba a)" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            long long factorialResult = calculateFactorial(a);
            if (factorialResult == -1) {
                cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
            } else {
                cout << "Silnia liczby " << a << " wynosi " << factorialResult << endl;

        if (wyjscie == 2) {
            if (isPrime(a)) {
                cout << "Liczba " << a << " jest liczba pierwsza." << endl;
            } else {
                cout << "Liczba " << a << " nie jest liczba pierwsza." << endl;
            }

        } else if (wyjscie != 0) {
            cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }

    } while(wyjscie != 0);

    cout << "Koniec programu." << endl;
    return 0;
}
