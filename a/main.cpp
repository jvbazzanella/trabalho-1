#include <string>
#include <iomanip>
#include <iostream>
#include "carro.h"
#include "barco.h"

using namespace std;


int main(){
    veiculo aut1("Ferrari", 300, 2);
    Carro aut2("Esportivo");
    Barco aut3(200);

    aut2.setMarca("Jeep");
    aut2.setCapacidade(4);
    aut2.setPotencia(200);

    aut3.setMarca("Yamaha");
    aut3.setCapacidade(15);
    aut3.setPotencia(15000);

    cout << "Automóvel 1:\n" << "Marca: " << aut1.getMarca() << "\nCapacidade: " << aut1.getCapacidade() << "\nPotência" << aut1.getPotencia() << endl;
    cout << "Automóvel 2:\n" << "Marca: " << aut2.getMarca() << "\nCapacidade: " << aut2.getCapacidade() << "\nPotência" << aut2.getPotencia() << "Tipo" << aut2.getTipo() << endl;
    cout << "Automóvel 3:\n" << "Marca: " << aut3.getMarca() << "\nCapacidade: " << aut3.getCapacidade() << "\nPotência" << aut3.getPotencia() << "Capacidade de Carga" << aut3.getCap_carga() << endl;

    return 0;
}
