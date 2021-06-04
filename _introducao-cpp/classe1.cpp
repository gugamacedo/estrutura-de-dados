#include <iostream>

using namespace std;

class propaganda{
    private:

    public:

    void inscrever(){
        cout << "Sinscreve nu Keneeel" << endl;
    }

    void curta(){
        cout << "Dá like e aperta o Cirilo" << endl;
    }

};

int main(){
    propaganda canal;
    canal.inscrever();
    canal.curta();
    return 0;
}