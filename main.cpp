#include <iostream>
#include <ctime>
using namespace std;

void Zapoln(int** mass, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mass[i][j] = rand() % 100 + 1;
        }
    }
}

void Vivod(int** mass, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}

void SumDiag(int** mass, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + mass[i][n - 1 - i];
    }
    cout << sum;
}

int main() {
    int n;
    cout << "Введите размерность" << endl;
    cin >> n;

    int** mass = new int*[n];
    for (int i = 0; i < n; i++) {
        mass[i] = new int[n];
    }

    Zapoln(mass, n);
    Vivod(mass, n);
    cout << "Сумма по диагонали" << endl;
    SumDiag(mass, n);

    delete[] mass;

    return 0;
}
