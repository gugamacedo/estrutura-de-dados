#include <iostream>

using namespace std;

int fatorial(int num){
    int fat = 1;
    for (int c = num; c >= 1; c--){
        fat *= c;
    }
    return fat;
}

int main(){
    int num;
    cout << "Informe um número:" << endl;
    cin >> num;
    cout << "O fatorial é: " << fatorial(num) << endl;

    return 0;
}
