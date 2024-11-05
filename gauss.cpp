#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    double S;
    vector<vector<double>> A = {
        {4.0,-2.0},
        {1.0, 3.0}
    };
    vector<double> B = {6.0, 5.0};
    vector<double> X(2,0);
    int N = B.size();

    //for (int k = 0; k < 10; k++){
    //    X[0] = (B[0] - A[0][1] * X[1]) / A[0][0];
    //    X[1] = (B[1] - A[1][0] * X[0]) / A[1][1];
    //    cout << k << ": " << X[0] << " " << X[1] << "\n";
    //};


    for (int k = 0; k < 10; k++){
        for (int i = 0; i < N; i++)
        {
            S = 0.0;
            for (int j = 0; j < N; j++){
                if (i != j){
                    S += A[i][j] * X[j];
                };
            }
            X[i] = (B[i] - S) / A[i][i];
            cout << k << ": " << X[0] << " " << X[1] << "\n";
        };
    };
    return 0;
}