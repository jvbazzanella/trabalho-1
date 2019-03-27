#include <string>
#include <iomanip>
#include <iostream>
#include "carro.h"
#include "veiculo.h"
#include "barco.h"

using namespace std;

int main(){
    //Carro auttt;
    veiculo aut1[5];
    Carro aut2[5];
    Barco aut3[5];

    int i, pot, cap, capcarg;
    int a,b=0,c=0,d=0;
    string mar, tip;

    for(i=0;i<5;i++){
      cout<<"digite o tipo de veiculo, 1 para barco e 2 para carro e 3 para generico"<<endl;
      cin>>a;

      switch (a) {
        case 3:

        cout<<"digite a marca"<<endl;
        cin>>mar;

        cout<<"digite a potencia"<<endl;
        cin>>pot;

        cout<<"digite a capacidade"<<endl;
        cin>>cap;

        aut1[d].setMarca(mar);
        aut1[d].setPotencia(pot);
        aut1[d].setCapacidade(cap);
        d++;
        break;

        case 2:

        cout<<"digite a marca"<<endl;
        cin>>mar;

        cout<<"digite a potencia"<<endl;
        cin>>pot;

        cout<<"digite a capacidade"<<endl;
        cin>>cap;

        cout<<"digite o tipo"<<endl;
        cin>>tip;

        aut2[b].setMarca(mar);
        aut2[b].setPotencia(pot);
        aut2[b].setCapacidade(cap);
        aut2[b].setTipo(tip);
        b++;
        break;

        case 1:

        cout<<"digite a marca"<<endl;
        cin>>mar;

        cout<<"digite a potencia"<<endl;
        cin>>pot;

        cout<<"digite a capacidade"<<endl;
        cin>>cap;

        cout<<"digite a capacidade de carga"<<endl;
        cin>>capcarg;

        aut3[c].setMarca(mar);
        aut3[c].setPotencia(pot);
        aut3[c].setCapacidade(cap);
        aut3[c].setCap_carga(capcarg);
        c++;
        break;
      }
    }

int x, y, z;

    for(x=0;aut1[x].getMarca() != "n";x++){
      cout<<"\nveiculo:\n";
      cout<<"marca:"<<aut1[x].getMarca()<< endl;
      cout<<"potencia:"<<aut1[x].getPotencia()<< endl;
      cout<<"capacidade de pessoas:"<<aut1[x].getCapacidade()<< endl;

    }

    for(y=0;aut2[y].getMarca() != "n";y++){
      cout<<"\ncarro:\n";
      cout<<"marca:"<<aut2[y].getMarca()<< endl;
      cout<<"potencia:"<<aut2[y].getPotencia()<< endl;
      cout<<"capacidade de pessoas:"<<aut2[y].getCapacidade()<< endl;
      cout<<"tipo de modelo:"<<aut2[y].getTipo()<< endl;
    }

    for(z=0;aut3[z].getMarca() != "n";z++){
      cout<<"\nbarco:\n";
      cout<<"marca:"<<aut3[z].getMarca()<< endl;
      cout<<"potencia:"<<aut3[z].getPotencia()<< endl;
      cout<<"capacidade de pessoas:"<<aut3[z].getCapacidade()<< endl;
      cout<<"capacidade de carga:" << aut3[z].getCap_carga()<< endl;
    }

    return 0;
}
