#include <iostream>
#include <cmath>
using namespace std;

double func(double x){
    return pow(x, 3) - x -1;
}

int main(){
    double a, b, c, erro;
    double f_a, f_b, f_c;
    cout << "Insira os limites do intervalo e o erro";
    cin >> a >> b >> erro;

    f_a = func(a);
    f_b = func(b);
    int i = 0;

    if ((f_a * f_b) > 0){
        cout << "Nao sao opostos" << endl;
        return 0;
    }

    while (abs(b-a) > erro){

        c = (a + b) / 2;
        f_c = func(c);
        if ((f_a * f_c) < 0){
            b = c;
        }
        if ((f_c * f_b) < 0){
            a = c;
        }
        i++;
    }
    cout << i << ' ' << (a + b)/2;
    return 0;
}