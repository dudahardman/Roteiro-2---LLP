#include "Pessoa.h"
#include "Endereco.h"
#include <iostream>
#include <sstream>
using namespace std;


Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(string n){
    nome = n;
}
Pessoa::Pessoa(string n, Endereco e, string tel){
    nome = n;
    ender = e;
    telefone = tel;
}
string Pessoa::getNome(){
    return nome;
}
string Pessoa::getEndereco(){
    stringstream str;
    str << ender.getRua() << ", " << ender.getNumero() << ", " <<
    ender.getBairro() << ", " << ender.getCidade() << ", " <<
    ender.getEstado() << ", " << ender.getCep() ;

    return str.str();
}
string Pessoa::getTelefone(){
    return telefone;
}
void Pessoa::setPessoa(string n, Endereco e, string tel){
    nome = n;
    ender = e;
    telefone = tel;
}
