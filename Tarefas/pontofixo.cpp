#include <iostream>
#include <cmath>
using namespace std;

#define MAXIT 100

double func(double x){
    return sqrt((x + 2));
}

int main(){
    double val, newval, tol;
    cout << "Digite o valor inicial e a tolerancia: ";
    cin >> val >> tol;

    for (int i = 0; i < MAXIT; i++){
        newval = func(val);
        if (fabs(newval - val) < tol){
            break;
        }
        val = newval;
    }
    cout << "O zero eh " << newval;
    
}