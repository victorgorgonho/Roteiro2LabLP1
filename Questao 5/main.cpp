#include <iostream>

#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    Trabalhador *t1 = new TrabalhadorPorHora("Victor Gorgonho", 34, 60);
    Trabalhador *t2 = new TrabalhadorAssalariado("Jose Victor", 4500);

    cout << "Nome: " << t1->getNome() << "\nPagamento semanal: " << t1->calcularPagamentoSemanal(60) << "\nSalario semanal: " << t1->getSalario() << endl << endl;
    //Pag semanal = 40 * 34 + (20 * 1,5) * 34

    cout << "Nome: " << t2->getNome() << "\nPagamento semanal: " << t2->calcularPagamentoSemanal(40) << "\nSalario mensal: " << t2->getSalario() << endl;
    //Pag semanal = 4500 / 4

    return 0;
}
