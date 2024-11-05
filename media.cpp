#include <iostream>
using namespace std;
int main(){
    int N[] = {5,7,8,8,7};
    double s;

    for (int i = 0; i < 5; i++){
        s += N[i];
    }

    cout << s;
}