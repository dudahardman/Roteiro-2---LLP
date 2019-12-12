#include "Endereco.h"
#include <iostream>
using namespace std;

Endereco::Endereco()
{
    //ctor
}

string Endereco::getRua(){
    return rua;
}

string Endereco::getBairro(){
    return bairro;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getEstado(){
    return estado;
}

string Endereco::getCep(){
    return cep;
}

int Endereco::getNumero(){
    return numero;
}

void Endereco::setEndereco(string r, int n, string b, string c, string e, string cp){
    rua = r;
    numero = n;
    bairro = b;
    cidade = c;
    estado = e;
    cep = cp;
}
