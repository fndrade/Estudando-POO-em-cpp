#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    string nome;
    int matricula;
    double nota1, nota2;

public:

    Aluno (){
        nome = "";
        matricula = 0;
        nota1 = nota2 = 0;
    }
    Aluno(string nome, int matricula, double nota1, double nota2)
    {
        this->nome = nome;
        this->matricula = matricula;
        this->nota1 = nota1;
        this->nota2 = nota2;
    }

    void setNome(string n)
    {
        nome = n;
    }
    string getNome() const
    {
        return nome;
    }

    void setMatricula(int mat)
    {
        matricula = mat;
    }
    int getMatricula() const
    {
        return matricula;
    }

    void setNota1(double n1)
    {
        nota1 = n1;
    }
    double getNota1() const
    {
        return nota1;
    }
    void setNota2(double n2)
    {
        nota2 = n2;
    }
    double getNota2() const
    {
        return nota2;
    }

    double media()
    {
        return (nota1 + nota2) / 2;
    }

    void situacao()
    {
        if (media() >= 60)
        {
            cout << "Aprovado!!" << endl;
        }
        else
        {
            cout << "Reprovado :(" << endl;
        }
    }
};

    int main()
    {

        Aluno teste;
        string nomee;
        double nota_1, nota_2;
        int mat;

        cout << "Digite o nome do aluno: " << endl;
        cin >> nomee;

        cout << "Digite a matricula: " << endl;
        cin >> mat;

        cout << "Digite a nota 1 e 2: " << endl;
        cin >> nota_1 >> nota_2;

        teste.setNome(nomee);
        teste.setMatricula(mat);
        teste.setNota1(nota_1);
        teste.setNota2(nota_2);

        cout << "Media: " << teste.media() << endl;
        teste.situacao();

        return 0;
    }
