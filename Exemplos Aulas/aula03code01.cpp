#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

// Função para implementar o Método de Gauss-Seidel
void gaussSeidel(const vector<vector<double>>& A, const vector<double>& b, vector<double>& x, int maxIter, double tol) 
{
    int n = A.size();
    for (int k = 0; k < maxIter; k++) 
    {
        vector<double> xOld = x; // Armazena o valor anterior de x
        for (int i = 0; i < n; i++) 
        {
            double sum = 0.0;
            for (int j = 0; j < n; j++) 
            {
                if (j != i) {
                    sum += A[i][j] * xOld[j]; // Cálculo da soma para a linha i
                }
            }
            x[i] = (b[i] - sum) / A[i][i]; // Atualiza x[i] com a fórmula de Gauss-Seidel
        }
        // Verifica a convergência
        double erro = 0.0;
        for (int i = 0; i < n; i++) 
        {
            erro = max(erro, fabs(x[i] - xOld[i])); // Erro absoluto
        }
        if (erro < tol) 
        {
            cout << "Convergência atingida após " << k + 1 << " iterações." << endl;
            return;
        }
    }
    cout << "Número máximo de iterações alcançado." << endl;
}

int main() 
{
    // Definição do sistema de equações: Ax = b
    vector<vector<double>> A = 
    {
        {3.0, 1.0},
        {1.0, 2.0}
    };

    vector<double> b = {5.0, 4.0}; // Lado direito do sistema
    vector<double> x = {0.0, 0.0}; // Inicializa o vetor solução com 0
    int maxIter = 100; // Número máximo de iterações
    double tol = 1e-6; // Tolerância para a convergência

    // Chamada da função de Gauss-Seidel
    gaussSeidel(A, b, x, maxIter, tol);

    // Exibição dos resultados
    cout << "Solução do sistema:" << endl;
    for (int i = 0; i < x.size(); i++) 
    {
        cout << "x[" << i << "] = " << setprecision(6) << fixed << x[i] << endl; // Formatação da saída
    }

    return 0;
}

