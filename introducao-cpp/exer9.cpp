#include <iostream>

using namespace std;

int main(){
    float* idade1 = new float;
    float* idade2 = new float;
    
    cout << "Informe a idade da 1ª pessoa: ";
    cin >> *idade1;

    cout << "Informe a idade da 2ª pessoa: ";
    cin >> *idade2;

    float* media = new float; 
    *media = (*idade1+*idade2)/2;     
    cout << "A média de idade é " << *media << endl;

    return 0;
}
