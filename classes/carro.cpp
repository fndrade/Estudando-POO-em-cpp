#include<iostream>
#include <string>

using namespace std;

class Carro{
    string marca;
    string modelo;
    int ano;
    double velocidade;
public:
    Carro(){
        marca = "";
        modelo = "";
        ano = 0;
        velocidade = 0;
    }

    void setMarca (string m){
        marca = m;
    }
    string getMarca() const{
        return marca;
    }

    void setModelo (string mod){
        modelo = mod;
    }
    string getModelo () const{
        return modelo;
    }

    void setAno(int a){
        ano = a;
    }
    int getAno () const{
        return ano;
    }

    void setVelocidade(double velo){
        velocidade = velo;
    }
    double getVelocidade() const{
        return velocidade;
    }

    bool acelerar (double v){
        if(v > 0){
            velocidade += v;
            return true;
        }
    return false;
    }

    bool frear (double v){
        if (v > 0){
           if(velocidade - v < 0) velocidade -= v;
           else velocidade -= v;
            return true;
        }
    return false;
    }

    bool parar (){
        velocidade = 0;
        return true;
    }
    void exibir (){
        cout << "Marca: " << marca << endl << "Modelo: " << modelo << endl << "Ano: " << ano << endl << "Velocidade atual: " << velocidade << endl;
    }
};

int main(){

    Carro C;
    string marca, modelo;
    int anofab;
    double veloc;

    cout << "Digite a marca e modelo: ";
    cin >> marca >> modelo;

    cout << "Digite ano de fab: ";
    cin >>anofab;

    cout<< "Digite a velocidade: ";
    cin >> veloc;

    C.setMarca(marca);
    C.setModelo(modelo);
    C.setAno(anofab);
    C.acelerar(veloc);

    C.exibir();
    C.acelerar(10);
    C.exibir();
    C.acelerar(50);
    C.exibir();
    C.frear(20);
    C.exibir();
    C.parar();
    C.exibir();
    
    return 0;
};
