#include <iostream>
#include <cmath>
using namespace std;

class Euler{
    double _y, _tempo, _h, _tfinal;
    public:
    Euler(double y, double h, double tfinal, double tempo){
        _y = y;
        _h = h;
        _tfinal = tfinal;
        _tempo = tempo;
    }
    void solve(){
        while (_tempo < _tfinal){
        _y = -2*_y*_h + _y;
        _tempo += _h;
        cout << _tempo << ": " << _y << ": " << exp(-2*_tempo) << "\n";
    }
    }
};



int main(){
    double y, t, h, tfinal;
    Euler ed1 = Euler(1.0, 0.001, 1.0, 0.0);
    ed1.solve();

}