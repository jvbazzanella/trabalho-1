#include <iostream>
#include <iomanip>
#include "veiculo.h"
#include <string>

using namespace std;

veiculo::veiculo(string m, int cav, int cap) : marca(m), cavalos(cav), capacidade(cap) {}

string veiculo::getMarca() const {
  return marca;
}

int veiculo::getCavalos() const {
  return cavalos;
}

int veiculo::getCapacidade() const {
  return capacidade;
}

void veiculo::setMarca(string m) {
  marca=m;
}

void veiculo ::setCavalos(int cav) {
  cavalos=cav;
}

void veiculo:: setCapacidade(int cap){
  capacidade=cap;
}
