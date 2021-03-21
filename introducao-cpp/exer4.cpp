#include <iostream>

using namespace std;

int potenciaf(int base, int potencia) {
    float sum = 1;
    for (int c = 1; c <= potencia; c++) {
        sum *= base;
    }
    return sum;
}

int main() {
    float base = 0;
    int potencia = 0;
    string option;
    do {
        cout << "Informe um número real pra base:" << endl;
        cin >> base;
        cout << "Informe um número inteiro positivo pra potência:" << endl;
        cin >> potencia;
        cout << "Resultado: " << potenciaf(base, potencia) << endl;
        cout << "Deseja ver outra potência? [S/N] ";
        cin >> option;
    } while (option != "N");    
    return 0;
}
