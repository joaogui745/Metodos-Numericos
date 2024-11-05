#include <iostream>
using namespace std;

int main(){
    double nums[3]; 
    double acc;
    cout << "Insira 3 numeros: ";
    for (int i=0; i< 3; i++){
        cin >> nums[i];
        acc += nums[i];
    }
    cout << "A media eh: " << acc / 3;

}