#include <iostream>
using namespace std;

// Função para calcular a soma da série
double calcularSomaSerie(int N) {
    double soma = 0.0; // Inicializa a soma

    // Calcula a soma da série
    for (int n = 1; n <= N; n++) {
        soma += 1.0 / (n * n); // Adiciona o termo atual à soma
    }

    return soma; // Retorna o resultado da soma
}

int main() {
    int N; // Número de termos a serem somados

    // Solicita ao usuário o número de termos
    cout << "Insira o número de termos (N) para calcular a série: ";
    cin >> N;

    // Chama a função para calcular a soma da série
    double resultado = calcularSomaSerie(N);

    // Exibe o resultado
    cout << "A soma da série S = Σ(1/n^2) para N = " << N << " é: " << resultado << endl;

    return 0; // Finaliza o programa
}
