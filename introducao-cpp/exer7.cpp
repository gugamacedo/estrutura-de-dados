#include <iostream>

using namespace std;

int main(){
    int linhas;
    int colunas;
    cout << "linhas das matrizes: ";
    cin >> linhas;
    cout << "Colunas das matrizes: ";
    cin >> colunas;
    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matriz3[linhas][colunas];

    cout << endl;
    
    cout << "Matriz1" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Insira o valor da linha " << i+1 << " coluna "<< j+1 << ": ";
            cin >> matriz1[i][j];
        }
    }
    cout << endl;

    // -------------------------------------------------------
    cout << "Matriz2" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Insira o valor da linha " << i+1 << " coluna "<< j+1 << ": ";
            cin >> matriz2[i][j];
        }
    }
    cout << endl;

    // -------------------------------------------------------
    cout << "Matriz1: " << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz1[i][j] << " ";
        }
    cout << endl;
    }

    cout << "Matriz2: " << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz2[i][j] << " ";
        }
    cout << endl;
    }

    cout << "Soma das matrizes: " << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz3[i][j] = matriz1[i][j] +  matriz2[i][j];
        }
    }
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz3[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}
