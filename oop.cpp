#include <iostream>
using namespace std;

class Estudante{
    int matricula;
    string nome;
    string curso;

    public:
    Estudante(string n, string c, int mat){
        nome = n;
        curso = c;
        matricula = mat;
    }
    Estudante(string n){
        nome = n;
    }
    void printar_nome(){
        cout << nome << endl;
    }
};

int main(){
    Estudante adriano("Adriano");
    adriano.printar_nome();
}