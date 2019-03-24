#include <string>
#include <iomanip>
#include <iostream>
#include "barco.h"

Barco::Barco(int capc) : cap_carga(capc){ }

int Barco::getCap_carga(){
    return capc;
}

void Barco::setCap_carga(int capc){
    cap_carga = capc;
}
