#include <iostream>

using namespace std;

class cidadesBrasil{
    private:
    int populacao, fundacao;
    float idh;

    public:
    cidadesBrasil(int p, int f, float i);
    int getpopulacao();
    int getfundacao();    
    float getidh();

};

int main(){
    cidadesBrasil santos(433656, 1546, 0.840);
    cout << "Santos: \n";
    cout << "População: " << santos.getpopulacao() << endl;
    cout << "Ano de fundação: " << santos.getfundacao() << endl;
    cout << "IDH: " << santos.getidh() << endl;
    return 0;
}

cidadesBrasil::cidadesBrasil(int p=0, int f=0, float i=0){
    populacao = p;
    fundacao = f;
    idh = i;
}

int cidadesBrasil::getpopulacao(){
    return populacao;
}
int cidadesBrasil::getfundacao(){
    return fundacao;
}
float cidadesBrasil::getidh(){
    return idh;
}