#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
using namespace std;

int main()
{
    Endereco e1 = Endereco();
    Endereco e2 = Endereco();
    e1.setEndereco("Av Hilton Souto Maior", 6701, "Portal do Sol", "JP", "PB", "58046600");
    e2.setEndereco("Rua Efigenio Barbosa", 52, "Bancarios", "JP", "PB", "58045500");

    Pessoa p1 = Pessoa();
    Pessoa p2 = Pessoa();

    p1.setPessoa("Duda", e1, "996583623");
    p2.setPessoa("Joao", e2, "988456321");

    cout << "\tPessoa 1: " << endl;
    cout << "Nome: " << p1.getNome() << endl;
    cout << "Endereco: " << p1.getEndereco() << endl;
    cout << "Telefone: " << p1.getTelefone() << "\n" << endl;
    cout << "\tPessoa 2: " << endl;
    cout << "Nome: " << p2.getNome() << endl;
    cout << "Endereco: " << p2.getEndereco() << endl;
    cout << "Telefone: " << p2.getTelefone() << endl;

    return 0;
}
