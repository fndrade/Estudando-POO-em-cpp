#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    string nome;
    int idade;
public:
    Pessoa (string n, int idade): nome(n), idade(idade){}
    void aniversario(){
        idade++;
    }

    void exibir(){
        cout << "Nome: "<< nome << "Idade: "<< idade << endl;
    }

};

int main(){
    Pessoa p("Fernanda", 22);

    p.exibir();
    p.aniversario();
    p.exibir();

    return 0;
}