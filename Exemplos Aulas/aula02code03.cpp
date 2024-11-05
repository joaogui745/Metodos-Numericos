#include <iostream>
#include <cmath>
using namespace std;

// Função para aplicar o Método do Ponto Fixo
double pontoFixo(double (*func)(double), double chuteInicial, double tolerancia, int maxIter) {
    double x = chuteInicial;
    for (int i = 0; i < maxIter; i++) {
        double xNovo = func(x); // Novo valor pela função iterativa
        if (fabs(xNovo - x) < tolerancia) { // Verificação da tolerância
            return xNovo;
        }
        x = xNovo;
    }
    return x; // Retorna o último valor após o número máximo de iterações
}

// Função iterativa g(x) para o Método do Ponto Fixo
double funcaoIterativa(double x) {
    return cos(x); // Exemplo: g(x) = cos(x)
}

int main() {
    // Exemplo de uso do Método do Ponto Fixo
    double chuteInicial = 0.5;
    double tolerancia = 0.0001;
    int maxIter = 100;
    double raiz = pontoFixo(funcaoIterativa, chuteInicial, tolerancia, maxIter);
    cout << "Raiz aproximada pelo Método do Ponto Fixo: " << raiz << endl;

    return 0;
}

