#include <iostream>

using namespace std;

int main(){
    float mediaAluno = 0;
    float nota = 0;
    for(int c = 1; c <= 3; c++){
        cout << "Digite a nota do aluno" << endl;
        cin >> nota;
        mediaAluno += nota;
    }
    mediaAluno = mediaAluno / 3;
    float mediaTurma;
    cout << "Agora informe e média da turma" << endl;
    cin >> mediaTurma;

    if(mediaAluno > mediaTurma){
        cout << "O aluno está acima da média" << endl;    
    } else if (mediaAluno == mediaTurma){
        cout << "O aluno está na média" << endl;
    } else if (mediaAluno < mediaTurma){
        cout << "O aluno está abaixo da média" << endl;
    }

    return 0;
}
