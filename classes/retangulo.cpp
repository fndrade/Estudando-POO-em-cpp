//Implemente a classe Retˆangulo e as opera ̧c ̃oes para calcular a  ́area e per ́ımetro.

#include <iostream>
using namespace std;

class Retangulo{
    double base, altura;

public:
    void setBase (double b){
        base = b;
    }
    double getBase() const{
        return base;
    }

    void setAltura(double a){
        altura = a;
    }
    double getAltura()const{
        return altura;
    }

    double calculaArea(){
        return getBase() * getAltura();

    }

    double calculaPerimetro(){
        return getBase() * 2 + getAltura() * 2;
    }

};

int main(){
    Retangulo R;
    double b, a;
    cout<<"Digite a base e altura: " << endl;
    cin>> b >> a;

    R.setBase(b);
    R.setAltura(a);

    cout<< "Area: " << R.calculaArea() << endl;
    cout<< "Perimetro: " << R.calculaPerimetro () << endl;

    return 0;
}