#include <iostream>

using namespace std;

int main(){
    int idade;
    float renda;
    cout << "Bem Vindo(a) ao Programa de Moradia Popular!" << endl;
    cout << "Informe sua idade: " << endl;
    cin >> idade;
    cout << "Informe sua renda: R$";
    cin >> renda;
    if(idade >= 21 && renda <= 1200){
        cout << "Aprovado!" << endl;
    } else if (idade < 21 || renda > 1200) {
        cout << "Negado!" << endl;
    }
    return 0;
}
