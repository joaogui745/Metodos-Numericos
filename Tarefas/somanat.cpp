#include <iostream>
using namespace std;

int main(){
    int num;
    int acc = 0;
    cout << "Insira um numero: ";
    cin >> num;
    for (int i=0; i <= num; i++){
        acc += i;
    }
    cout << "O somatorio eh " << acc;
}