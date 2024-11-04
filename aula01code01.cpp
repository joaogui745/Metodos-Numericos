#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, tol;
    int iter = 0, maxIter = 1000;

    cout << "Método da Bissecção" << endl;

    // Entrada do intervalo e tolerância
    cout << "Insira o intervalo [a, b]. \n";
    cout << "Insira a:  ";
    cin >> a;
    cout << "Insira b:  ";
    cin >> b;
    cout << "Insira a tolerância:  ";
    cin >> tol;

    // Verifica se a função muda de sinal no intervalo [a, b]
    if ((a * a - 5) * (b * b - 5) >= 0) {
        cout << "A função deve mudar de sinal no intervalo fornecido." << endl;
        return 1; // Retorna um erro
    }

    double f_c = 1.0;
    
    // Implementação do método da bissecção
    while (fabs(b-a) > tol && iter < maxIter) 
    {
        c = (a + b) / 2.0; // Ponto médio
        f_c = c * c - 5; // Avaliação da função f(c)

        if (f_c == 0.0) {
            break; // Raiz encontrada
        } else if (f_c * (a * a - 5) < 0) {
            b = c; // A raiz está no intervalo [a, c]
        } else {
            a = c; // A raiz está no intervalo [c, b]
        }
        
        iter++;
    } ; // Continua até atingir a tolerância ou máximo de iterações

    // Exibe o resultado
    if (iter < maxIter) {
        cout << "Raiz encontrada: " << c << endl;
        cout << "Número de iterações: " << iter << endl;
    } else {
        cout << "Número máximo de iterações alcançado." << endl;
    }

    return 0;
}

