#include <string>
#include <iostream>

using namespace std;

class ContaBancaria{
    string titular;
    float saldo;
public:
    ContaBancaria (string titular = 0, float saldo = 0){
        this -> titular = titular;
        this -> saldo = saldo;
    }
    bool depositar (int valor){
        if (valor > 0){
            saldo += valor;
            return true;
        }
        return false;
    }
    bool sacar(int valor){
        if(saldo > 0 && valor > 0){
            saldo -= valor;
            return true;
        }
        return false;
    }

    void exibir(){
        cout << "Titular: " << titular << "|  Saldo: " << saldo << endl;
    }

};

int main(){
    ContaBancaria B ("Pavê", 2345.98);

    B.exibir();
    B.depositar(500);
    B.exibir();
    B.sacar(1000);
    B.exibir();

    return 0;
}