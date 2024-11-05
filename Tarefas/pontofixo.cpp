#include <iostream>
#include <cmath>
using namespace std;

#define MAXIT 100

double func(double x){
    return sqrt((x + 2));
}

int main(){
    double val, newval, inter;
    cout << "Digite o valor inicial e o erro: ";
    cin >> val >> inter;

    for (int i = 0; i < MAXIT; i++){
        newval = func(val);
        if (fabs(newval - val) < inter){
            break;
        }
        val = newval;
    }
    cout << "O zero eh " << newval;
    
}