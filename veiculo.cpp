#include <iostream>
#include <iomanip>
#include "veiculo.h"
#include <string>

using namespace std;

veiculo::veiculo(string m, int cav, int cap) : marca(m), potencia(cav), capacidade(cap) {}

string veiculo::getMarca() const {
  return marca;
}

int veiculo::getPotencia() const {
  return potencia;
}

int veiculo::getCapacidade() const {
  return capacidade;
}

void veiculo::setMarca(string m) {
  marca=m;
}

void veiculo ::setPotencia(int cav) {
  potencia=cav;
}

void veiculo:: setCapacidade(int cap){
  capacidade=cap;
}
