#include <iostream>
using namespace std;

int main(){
    double num;
    string sinal;
    cout << "Digite um numero: ";
    cin >> num;
    if (num > 0){
        sinal = "positivo";
    }
    else if (num < 0){
        sinal = "negativo";
    }
    else{
        sinal = "zero";
    }

    cout << "Este numero eh " << sinal;

    return 0;
}