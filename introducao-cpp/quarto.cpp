#include <iostream>

using namespace std;

void escrever(string nome){ // void quer dizer que é uma função sem retorno/saída
    cout << "Oi, " << nome << endl;
}

int calcular(int a, int b){
    return a+b;
}

int main(){
    escrever("Creusa");
    cout << "Soma: " << calcular(8, 4) << endl;
    return 0;
}
