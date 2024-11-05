#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double intervalo = 0.00001;
    double a = 2;
    double b = 3;
    double f_a = a*a - 5;
    double f_b = b*b - 5;
    double c, f_c;
    int i = 0;

    if ((f_a * f_b) > 0){
        cout << "Nao sao opostos" << endl;
    }

    while (abs(b-a) > intervalo){

        c = (a + b) / 2;
        f_c = c * c - 5;
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