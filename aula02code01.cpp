#include <iostream>
using namespace std;

// Função para calcular a média de um vetor de números
double calcularMedia(double valores[], int tamanho)
{
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += valores[i];
    }
    return soma / tamanho;
}

int main() {
    // Exemplo de cálculo de média
    double valores[] = {10.5, 20.0, 30.5, 40.0};
    int tamanho = 4;
    cout << "Média dos valores: " << calcularMedia(valores, tamanho) << endl;

    return 0;
}

