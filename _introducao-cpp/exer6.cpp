#include <iostream>

using namespace std;

int main(){
    int familias[5];
    int media = 0;

    for(int i = 0; i <= 4; i++){
        cout << "Digite o gasto da " << i+1 << "ª familia: ";
        cin >> familias[i];
        media += familias[i];
    }
    media /= 5;
    cout << endl << "A média é " << media << endl << endl;

    for(int i = 0; i <= 4; i++){
        if(familias[i] < media){
            cout << "A familia " << i+1 << " gastou abaixo da media" << endl;
        } else if (familias[i] > media){
            cout << "A familia " << i+1 << " gastou acima da media" << endl;
        } else if (familias[i] == media){
            cout << "A familia " << i+1 << " gastou na media" << endl;
        }
    }

    return 0;
}
