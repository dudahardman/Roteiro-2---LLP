#include <iostream>
#include "Trabalhador.h"
#include "TrabAssalariado.h"
#include "TrabPorHora.h"
#include <string>
using namespace std;

int main()
{
    TrabAssalariado t1 = TrabAssalariado();
    TrabPorHora t2 = TrabPorHora();

    t1.setNome("Joao");
    t1.setSalario(1500);
    t2.setNome("Maria");
    t2.setValorHora(15.0);

    cout << "\t\tFuncionario 1:" << endl;
    cout << "Nome: " << t1.getNome() << endl;
    cout << "Salario: " << t1.getSalario() << endl;
    cout << "Pagamento Semanal: " << t1.calculaPagSemanal2() << endl;

    cout << "\n\t\tFuncionario 2:" << endl;
    cout << "Nome: " << t2.getNome() << endl;
    cout << "Salario: " << t2.calculaPagSemanal(8) * 4.0 << endl;
    cout << "Pagamento Semanal: " << t2.calculaPagSemanal(8) << endl;

    return 0;
}
