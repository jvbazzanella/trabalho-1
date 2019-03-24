#include <string>
#include <iomanip>
#include<iostream>
#include "carro.h"

using namespace std;

Carro::Carro(string t) : tipo(t) {}

string Carro::getTipo(){
    return tipo;
}

void Carro::setTipo( string t){
    tipo = t;
}

