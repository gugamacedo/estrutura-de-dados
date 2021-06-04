#include <iostream>

using namespace std;

int main(){
    char option;
    do {
        int tamanho;
        cout << "Tamanho do vetor: ";
        cin >> tamanho;
        int* vet = new int[tamanho];

        for (int i = 0 ; i < tamanho; i++){
            cout << "Insira o " << i+1 << "º vetor: ";
            cin >> vet[i];
        }

        for (int i = 0 ; i < tamanho; i++){
            cout << vet[i] << " ";
        }
        cout << endl;

        delete vet;
        
        cout << "Quer criar outro vetor? [S/N] ";
        cin >> option;

    } while (option != 'N');

    return 0;
}
