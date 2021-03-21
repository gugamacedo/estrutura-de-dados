#include <iostream>
#include <math.h> // pra usar a potência

using namespace std;

int main(){
    float x;
    cout << "Digite um valor pra X da função f(x) = x² -3x + 5" << endl;
    cin >> x;
    float f = pow(x, 2) -3*x +5;
    cout << "Resultado: " << f << endl;
    return 0;
}
