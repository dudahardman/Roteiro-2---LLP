#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Funcionario f1 = Funcionario();
    Funcionario f2 = Funcionario();
    f1.setFunc("225", "Maria Eduarda", 4000);
    f2.setFunc("155", "Joao", 3000);

    Consultor c1 = Consultor();
    c1.setFunc("45", "Carlos", 8000);

    cout << "\tFuncionario 1:" << endl;
    cout << "Nome: " << f1.getNome() << endl;
    cout << "Matricula: " << f1.getMat() << endl;
    cout << "Salario: " << f1.getSal() << endl;

    cout << "\n\tFuncionario 2:" << endl;
    cout << "Nome: " << f2.getNome() << endl;
    cout << "Matricula: " << f2.getMat() << endl;
    cout << "Salario: " << f2.getSal() << endl;

    cout << "\n\tConsultor:" << endl;
    cout << "Nome: " << c1.getNome() << endl;
    cout << "Matricula: " << c1.getMat() << endl;
    cout << "Salario: " << c1.getSal() << endl;

    cout << "\n\n\tSalarios Pos Bonus" << endl;
    cout << "Salario Consultor * 10%: " << c1.SalarioBonus() << endl;
    cout << "Salario Consultor * 50%: " << c1.getSalario(1.5) << endl;

    return 0;
}
