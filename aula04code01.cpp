#include <iostream>

using namespace std;

// Classe para resolver EDOs usando o Método de Euler
class EulerSolver {
private:
    double y0;        // Condição inicial
    double t0;        // Tempo inicial
    double tf;        // Tempo final
    double h;         // Tamanho do passo

public:
    // Construtor para inicializar o solver com condições iniciais e parâmetros
    EulerSolver(double y_init, double t_init, double t_final, double step_size)
        : y0(y_init), t0(t_init), tf(t_final), h(step_size) {}

    // Função que define a EDO dy/dt = -2y
    double odeFunction(double t, double y) 
    {
        return -2 * y;
    }

    // Método para resolver a EDO usando o Método de Euler
    void solve() {
        double t = t0;
        double y = y0;

        cout << "t\ty" << endl;
        cout << t << "\t" << y << endl;

        // Usando um loop while para avançar no tempo
        while (t < tf) {
            y = y + h * odeFunction(t, y);  // Método de Euler: y_{n+1} = y_n + h * f(t_n, y_n)
            t = t + h;                      // Incrementa o tempo

            if (t > tf) {
                break; // Para se o tempo ultrapassar tf
            }

            cout << t << " " << y << endl;  // Imprime o valor de t e y
        }
    }
};

int main() {
    // Parâmetros da EDO e do método de Euler
    double y0 = 1.0;          // Condição inicial y(0) = 1
    double t0 = 0.0;          // Tempo inicial
    double tf = 2.0;          // Tempo final
    double h = 0.1;           // Tamanho do passo

    // Instancia o solver e resolve a EDO
    EulerSolver solver(y0, t0, tf, h);
    solver.solve();

    return 0;
}
